#include <Arduino.h>
#include <Adafruit_Sensor.h>
#include "FS.h"
#include <Adafruit_GFX.h>
#include <DHT.h>

#include <Wire.h>
#include <SPI.h>


DHT sensor(5, DHT22);

float temp, hum;

void setup() {
  Serial.begin(9600);
  sensor.begin();
}

void loop() {
  hum = sensor.readHumidity();
  temp = sensor.readTemperature();

  if (!isnan(hum) && !isnan(temp)) 
  {
  Serial.print("Temperatura: ");  // Added space after "Temperatura:"
  Serial.print(float(temp));
  Serial.print("°C ");  // Added "°C" to indicate degrees Celsius
  Serial.print("Humedad: ");  // Added space after "Humedad:"
  Serial.print(hum);
  Serial.println("%");

  } else {
    Serial.println("Failed to read data from DHT sensor!");
  }

  delay(2000);  // wait for two seconds before reading again
}

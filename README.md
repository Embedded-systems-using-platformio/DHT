# ESP32 DHT22 Temperature and Humidity Monitor

This project is a simple guide on how to set up an ESP32 microcontroller to read temperature and humidity data from a DHT22 sensor and display it using PlatformIO.

## Table of Contents

- [Set Up Your Development Environment](#set-up-your-development-environment)
- [Create a New Project](#create-a-new-project)
- [Connect ESP32 and DHT22](#connect-esp32-and-dht22)
- [Install Required Libraries](#install-required-libraries)
- [Upload and Monitor](#upload-and-monitor)
- [Power Your ESP32](#power-your-esp32)

---

## Set Up Your Development Environment

Before you begin, make sure you have PlatformIO installed. If you haven't already, you can follow the instructions on their website to get started: [PlatformIO Installation](https://platformio.org/get-started).

## Create a New Project

1. Use PlatformIO to create a new ESP32 project. Follow these steps:
   - Open PlatformIO Home screen.
   - Select "New Project."
   - Choose ESP32 as your target platform.

## Connect ESP32 and DHT22

2. Connect the DHT22 sensor to your ESP32 as follows:

   - Connect the DHT22's VCC pin to the 3.3V output on the ESP32.
   - Connect the DHT22's GND pin to the ground (GND) on the ESP32.
   - Connect the DHT22's data pin (usually labeled "OUT") to a GPIO pin on the ESP32 (e.g., GPIO).
  
 <img width="634" alt="Screenshot 2023-09-23 at 11 53 48" src="https://github.com/Embedded-systems-using-platformio/DHT/assets/96942247/e86fca2f-02a4-4de2-9d9a-784d4af05288">

![WhatsApp Image 2023-09-23 at 12 23 15 PM](https://github.com/Embedded-systems-using-platformio/DHT/assets/96942247/15d93b7f-7b3b-40e4-8937-8adcfae4f525)


## Install Required Libraries

3. Install the necessary libraries for your project. To do this, add the library dependencies to your `platformio.ini` file.

## Upload and Monitor

4. Use PlatformIO to build and upload the code to your ESP32 board. Ensure that your ESP32 board is properly powered, either through USB or an external power source.

5. Open the Serial Monitor in PlatformIO to see the temperature and humidity data being printed.

![Untitled](https://github.com/Embedded-systems-using-platformio/DHT/assets/96942247/c82346e4-cd64-40ff-95af-636ffc28c0b8)
   

## Power Your ESP32

6. Ensure that your ESP32 board is properly powered, either through USB or an external power source.

Now you're ready to start monitoring temperature and humidity using your ESP32 and DHT22 sensor.

Feel free to customize and expand upon this project as needed.


# Bluetooth Controlled Car

This project demonstrates how to build and control a car using an **Arduino** and a **Bluetooth module (HC-05)**.  
The car can be controlled wirelessly through an Android/iOS app or any Bluetooth terminal application.  

## Features
- Control car movement (Forward, Backward, Left, Right) using Bluetooth commands.
- Built using Arduino Uno, motor driver (L293D), and Bluetooth module.
- Easy to customize for different control apps.
- Wireless range depends on the Bluetooth module (typically 5–10 meters).

## Components Used
- Arduino Uno 
- HC-05 Bluetooth Module  
- L293D Motor Driver Module  
- DC Motors with wheels (x4)  
- Power Supply (Battery Pack)  
- Chassis for car body  

## How It Works
1. The Arduino receives commands from the Bluetooth module.  
2. Based on the command (e.g., 'F' for Forward, 'B' for Backward), it drives the motors via the motor driver.  
3. The car moves accordingly in real time.  

## Arduino Code
The Arduino code included in this repository handles incoming serial commands from the Bluetooth module and maps them to car movements.

## Setup
1. Upload the code to your Arduino board.  
2. Pair your smartphone with the HC-05 Bluetooth module.  
3. Open any Bluetooth controller app and connect to the module.  
4. Use control buttons to move the car.  

## Example Commands
- `F` → Move Forward  
- `B` → Move Backward  
- `L` → Turn Left  
- `R` → Turn Right   

## Future Improvements
- Add obstacle avoidance using an ultrasonic sensor.  
- Control via Wi-Fi using ESP32.
- Mobile app with a custom UI.

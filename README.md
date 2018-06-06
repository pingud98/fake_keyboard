# fake_keyboard
A random word inserter for Arduino Micro/Leonardo

A few weeks ago I gave into temptation and bought one of these:
https://www.aliexpress.com/item/Beetle-Virtual-Keyboard-BadUSB-Pro-Micro-ATMEGA32U4-Module-Mini-Development-Expansion-Board-For-Arduino-Leonardo-R3/32845916898.html?spm=a2g0s.9042311.0.0.56b74c4dBEKZ7C

![It looks like this](https://github.com/pingud98/fake_keyboard/raw/master/Beetle-Virtual-Keyboard-BadUSB-Pro-Micro-ATMEGA32U4-Module-Mini-Development-Expansion-Board-For-Arduino-Leonardo-R3.jpg)

It's an Arduino Leonardo clone on a 2.something mm thick PCB. It has a power LED and a conventional Arduino LED on pin 13. The most interesting thing is that it can be reprogrammed to act as an HID (Human Interface Device). This has long been a property of the Arduino Leonardo (Atmel MEGA32U4), but isn't quite so interesting until you put it on a USB key. The aim of this project is to create a device which will type random silly things into the computers of my friends when they're not looking.

Use responsibly!

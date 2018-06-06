/*
  This code is licensed udner
  GNU GENERAL PUBLIC LICENSE V3

  Kudos to these guys for telling me how to do it
  http://www.arduino.cc/en/Tutorial/KeyboardMessage

  Unlike all the other serious code I've written for Arduino,
  this one is for making jokes! Insert your word(s) and plug
  in to a computer somewhere discrete. It could be quite funny!
  Use at your own risk and don't be (too) evil. 
*/

#include "Keyboard.h"

void setup() {
  // initialize control over the keyboard:
  Keyboard.begin();
}

void loop() {
    delay(random(50000, 500000));
    Keyboard.print("INSERT YOUR WORD HERE ");

    delay(random(50000, 500000));
    Keyboard.print("INSERT YOUR WORD HERE ");

    delay(random(50000, 500000));
    Keyboard.print("INSERT YOUR WORD HERE ");

    delay(random(50000, 500000));
    Keyboard.print("INSERT YOUR WORD HERE ");

    delay(random(50000, 500000));
    Keyboard.print("INSERT YOUR WORD HERE ");

    delay(random(50000, 500000));
    Keyboard.print("INSERT YOUR WORD HERE ");
}

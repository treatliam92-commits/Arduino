/*
  Blink

Dev: Liam Treat
Date: 2/13/2026

  Turns an LED on for one second, then off for one second, repeatedly.

  Most Arduinos have an on-board LED you can control. On the UNO, MEGA and ZERO
  it is attached to digital pin 13, on MKR1000 on pin 6. LED_BUILTIN is set to
  the correct LED pin independent of which board is used.
  If you want to know what pin the on-board LED is connected to on your Arduino
  model, check the Technical Specs of your board at:
  https://docs.arduino.cc/hardware/

  modified 8 May 2014
  by Scott Fitzgerald
  modified 2 Sep 2016
  by Arturo Guadalupi
  modified 8 Sep 2016
  by Colby Newman

  This example code is in the public domain.

  https://docs.arduino.cc/built-in-examples/basics/Blink/
*/

// the setup function runs once when you press reset or power the board
int buzzer = 6;  // Pin the piezo is connected to

void setup() {
  pinMode(10, OUTPUT);
  pinMode(9, OUTPUT);
  pinMode(buzzer, OUTPUT);
}

void loop() {
  digitalWrite(10, HIGH);
  digitalWrite(9, LOW);
  delay(250);

  digitalWrite(10, LOW);
  digitalWrite(9, HIGH);
  delay(250);

  tone(buzzer, 1000);  // Play 1000 Hz
  delay(250);

  tone(buzzer, 400);   // Play 400 Hz
  delay(250);
}



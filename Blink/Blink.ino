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
int buzzer = 10;   // Speaker on pin 10
int led1 = 6;      // LED 1
int led2 = 9;      // LED 2
int led3 = 11;     // LED 3

void setup() {
  pinMode(led1, OUTPUT);
  pinMode(led2, OUTPUT);
  pinMode(led3, OUTPUT);
  pinMode(buzzer, OUTPUT);
}

void pulseLED(int ledPin, int frequency) {
  tone(buzzer, frequency);  // Play tone during pulse
  
  for (int brightness = 0; brightness <= 255; brightness++) {
    analogWrite(ledPin, brightness);
    delay(5);
  }
  for (int brightness = 255; brightness >= 0; brightness--) {
    analogWrite(ledPin, brightness);
    delay(5);
  }
}

void loop() {

  pulseLED(led1, 1000);  // LED 6 with 1000 Hz
  pulseLED(led2, 700);   // LED 9 with 700 Hz
  pulseLED(led3, 400);   // LED 11 with 400 Hz

}

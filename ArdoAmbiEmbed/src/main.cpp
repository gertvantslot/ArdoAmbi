#include <Arduino.h>

int speed = 500;

void setup() {
  // put your setup code here, to run once:

  Serial.begin(9600);

  Serial.println();
  Serial.println();
  Serial.println("Initializing");

  pinMode(LED_BUILTIN, OUTPUT);

}

void loop() {
  // put your main code here, to run repeatedly:

  long tick = millis() / speed;
  int led = tick % 2;
  digitalWrite(LED_BUILTIN, led);

  if (Serial.available() > 0) {
    speed = Serial.read() * 10;

    // Save values
    if (speed < 1) speed = 1;
    if (speed > 1000) speed = 1000;
  }

}
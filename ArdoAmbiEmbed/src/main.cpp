#include <Arduino.h>

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

  digitalWrite(LED_BUILTIN, HIGH);
  delay(500);
  digitalWrite(LED_BUILTIN, LOW);
  delay(500);

  if (Serial.available()) {
    Serial.read();
  }

}
#include <Arduino.h>

void setup() {
  Serial.begin(9600);
  Serial.available();
  pinMode(7, OUTPUT);
  pinMode(6, INPUT_PULLUP);
}

void loop() {
  digitalWrite(7, HIGH);
  Serial.print(digitalRead(7)); Serial.println(!digitalRead(6));
}

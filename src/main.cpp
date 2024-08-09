#include <Arduino.h>

// put function declarations here:
int myFunction(int, int);

void setup() {
  Serial.begin(9600);
  Serial.available();
  // put your setup code here, to run once:
  int result = myFunction(2, 3);
  Serial.println(result);

}

void loop() {
    String hello = Serial.readString();
    Serial.print(hello);
  // put your main code here, to run repeatedly:
}

// put function definitions here:
int myFunction(int x, int y) {
  return x + y;
}
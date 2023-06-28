/******************************************************/
//       THIS IS A GENERATED FILE - DO NOT EDIT       //
/******************************************************/

#include "Particle.h"
#line 1 "/Users/admin/CTD_2023/slider/src/slider.ino"
void setup();
void loop();
#line 1 "/Users/admin/CTD_2023/slider/src/slider.ino"
SYSTEM_MODE(MANUAL);
SYSTEM_THREAD(ENABLED);

int lowest = 4095;
int highest = 0;

void setup() {
  pinMode(A0, INPUT);
  pinMode(D4, OUTPUT);
  pinMode(D5, OUTPUT);
  pinMode(D6, OUTPUT);
  pinMode(D7, OUTPUT);
  pinMode(D8, OUTPUT);
}

void loop() {
  lowest = min(analogRead(A0), lowest);
  highest = max(analogRead(A0), highest);
  int pin = map(analogRead(A0), lowest, highest, 4, 9);
  digitalWrite(pin, 1);
  digitalWrite(pin - 1, 0);
  digitalWrite(pin + 1, 0);
}
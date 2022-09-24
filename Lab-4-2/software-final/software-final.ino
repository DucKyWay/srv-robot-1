#include <Wire.h>
#include "RichShieldTM1637.h"

#define CLK 10
#define DIO 11
TM1637 disp(CLK,DIO);

#define ledRed 4
#define ledGreen 5

void setup() {
  disp.init();
  pinMode (4, OUTPUT);
  pinMode (5, OUTPUT);
}

void loop() {
  for (int i=25;i>0;i--) {
    disp.display(i);
    digitalWrite(ledRed, HIGH);
    delay(800);
    digitalWrite(ledRed, LOW);
    delay(200);
  }
  digitalWrite(ledRed, LOW);
  for (int i=18;i>0;i--) {
    disp.display(i);
    digitalWrite(ledGreen, HIGH);
    delay(800);
    digitalWrite(ledGreen, LOW);
    delay(200);
  }
  digitalWrite(ledGreen, LOW);
}
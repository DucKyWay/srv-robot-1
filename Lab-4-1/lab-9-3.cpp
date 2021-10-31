#include <LiquidCrystal.h>
LiquidCrystal lcd(12, 11, 5, 4, 3, 2);
int sw1 =7;
int sw2 =6;

void setup() {
    lcd.begin(16, 2);
    pinMode(sw1,INPUT);
    pinMode(sw2,INPUT);
    lcd.setCursor(3, 0);
    lcd.print("set up");
    delay(2000);
    lcd.clear();
    lcd.setCursor(5, 0);
    lcd.print("Online");
    delay(2000);
}

void loop() {
    delay(1000);
    if(digitalRead(sw1)==1 &&digitalRead(sw2)==1) {
        lcd.clear();
        lcd.setCursor(0,0);
        lcd.print("My Name is");
        lcd.setCursor(6,1);
        lcd.print("Nijizzz");  
    }
    else if(digitalRead(sw1)==0 &&digitalRead(sw2)==1) {
        lcd.clear();
        lcd.print("Sriatum");
        lcd.setCursor(6,1);
        lcd.print("University");
    }
    else if(digitalRead(sw1)==1 &&digitalRead(sw2)==0) {
        lcd.clear();
        lcd.print("Sarawittaya");
        lcd.setCursor(8,1);
        lcd.print("School");
    }
}
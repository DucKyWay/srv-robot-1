#include <LiquidCrystal.h>
LiquidCrystal lcd(12, 11, 5, 4, 3, 2);

void setup(){
    lcd.begin(16, 2);
    lcd.print('Hello, World');
}
void loop(){
    lcd.clear();
    lcd.setCursor(0, 0);
    lcd.print("I");
    lcd.setCursor(6, 1);
    lcd.print("LOVE");
    lcd.setCursor(13, 0);
    lcd.print("SRV");
    delay(2000);

    lcd.clear();
    lcd.setCursor(0, 1);
    lcd.print("I");
    lcd.setCursor(6, 0);
    lcd.print("LOVE");
    lcd.setCursor(13, 1);
    lcd.print("SRV");
    delay(2000);
}
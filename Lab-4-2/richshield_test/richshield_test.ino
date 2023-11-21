#include <Wire.h>
#include <math.h>
#include "RichShieldTM1637.h"
#include "RichShieldDHT.h"
#include "RichShieldLightSensor.h"
#include "RichShieldNTC.h"
 
#define CLK 10//CLK of the TM1637 IC connect to D10 of OPEN-SMART UNO R3
#define DIO 11//DIO of the TM1637 IC connect to D11 of OPEN-SMART UNO R3
TM1637 disp(CLK,DIO);
#define NTC_PIN A1 //SIG pin of NTC module connect to A1 of IO Shield, that is pin A1 of OPEN-SMART UNO R3
NTC temper(NTC_PIN);  
 
#define LIGHTSENSOR_PIN A2//SIG pin of Rocker Switch module connect to A0 of IO Shield, that is pin A2 of OPEN-SMART UNO R3
LightSensor lightsensor(LIGHTSENSOR_PIN);
DHT dht;
 
void setup()
{
  disp.init();//The initialization of the display
  dht.begin();
}
 
void loop()
{   
 
 
  float celsius;
  celsius = temper.getTemperature();
  float h = dht.readHumidity();
  float t = dht.readTemperature();
  float Rsensor = lightsensor.getRes();//if Rsensor is larger than 40 KOhm, the ambient light is very dark.
  float lux;
  lux = 325*pow(Rsensor,-1.4);
 
  // check if returns are valid, if they are NaN (not a number) then something went wrong!
  if (isnan(t) || isnan(h)) {
    displayError();
  } 
  else{
    displayHumidity((int8_t)h);//
    delay(1000);
    displayTemperature((int8_t)t);//
    delay(1000);
    disp.display(analogRead(A0));//
    delay(1000);
    disp.display(lux);
    delay(1000);
    displayTemperature((int8_t)celsius);//
    delay(1000);
 
  }
 
}
void displayTemperature(int8_t temperature)
{
  int8_t temp[4];
  if(temperature < 0)
  {
    temp[0] = INDEX_NEGATIVE_SIGN;
    temperature = abs(temperature);
  }
  else if(temperature < 100)temp[0] = INDEX_BLANK;
  else temp[0] = temperature/100;
  temperature %= 100;
  temp[1] = temperature / 10;
  temp[2] = temperature % 10;
  temp[3] = 12;           //index of 'C' for celsius degree symbol.
  disp.display(temp);
}
void displayHumidity(int8_t humi)
{
  int8_t temp[4];
  if(humi < 100)temp[0] = INDEX_BLANK;
  else temp[0] = humi/100;
  humi %= 100;
  temp[1] = humi / 10;
  temp[2] = humi % 10;
  temp[3] = 18;           //index of 'H' for celsius degree symbol.
  disp.display(temp);
}
void displayError()
{
  disp.display(3,14);//display "E"
}

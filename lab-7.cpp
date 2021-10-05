//add pin
int PWMl = 6;
int CWl = 7;
int CCWl = 8;
int PWMr = 9;
int CWr =10;
int CCWr =11; 
int bt0 = 4;
int bt1 =3;
//setup pin
void setup(){ 
  	// The LEFT output
    Serial.begin(9600);
    pinMode(CWl, OUTPUT);
    pinMode(CCWl, OUTPUT);
    pinMode(PWMl, OUTPUT);
    pinMode(CWr, OUTPUT);
    pinMode(CCWr, OUTPUT);
    pinMode(PWMl, OUTPUT);
    pinMode(bt0, INPUT);
    pinMode(bt1, INPUT);
}
//button push
void loop(){
    //forward
    if ((digitalRead(bt0)==LOW)&&(digitalRead(bt1)==LOW)){
        digitalWrite(CWl, LOW);
        digitalWrite(CCWl, HIGH);
        digitalWrite(PWMl, HIGH);
        digitalWrite(CWr, HIGH);
        digitalWrite(CCWr, LOW);
        digitalWrite(PWMr, HIGH);
        Serial.println(0);
    }
    //turn left
    else if(digitalRead(bt0)==LOW && digitalRead(bt1)==HIGH){
        digitalWrite(PWMl, HIGH);
        digitalWrite(CWl, HIGH);
        digitalWrite(CCWl, LOW);
        digitalWrite(PWMr, HIGH);
        digitalWrite(CWr, HIGH);
        digitalWrite(CCWr, LOW);
        Serial.println(1);
    }
    //turn right
    else if(digitalRead(bt0)==HIGH && digitalRead(bt1)==LOW){
        digitalWrite(PWMl, HIGH);
        digitalWrite(CWl, LOW);
        digitalWrite(CCWl, HIGH);
        digitalWrite(PWMr, HIGH);
        digitalWrite(CWr, LOW);
        digitalWrite(CCWr, HIGH);
        Serial.println(2);
    }
    //stop
    else if(digitalRead(bt0)==HIGH && digitalRead(bt1)==HIGH){
        digitalWrite(PWMl, LOW);
        digitalWrite(PWMr, LOW);
        Serial.println(3);
    }
}
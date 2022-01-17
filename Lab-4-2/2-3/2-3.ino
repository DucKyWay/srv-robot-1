int led1 = 4;
int led2 = 5;
int led3 = 6;
int led4 = 7;
int k1 = 8;
int k2 = 9;

void setup(){
  pinMode (led1, OUTPUT);
  pinMode (led2, OUTPUT);
  pinMode (led3, OUTPUT);
  pinMode (led4, OUTPUT);
  pinMode (k1, INPUT_PULLUP);
  pinMode (k2, INPUT_PULLUP);
}

void loop(){
  int status1 = digitalRead (k1);
  int status2 = digitalRead (k2);
  if(status1 == LOW){

    for (int i=1;i<=5;i++){
      digitalWrite (led1, HIGH);
      delay (100);
      digitalWrite (led1, LOW);
      delay (200);
      digitalWrite (led2, HIGH);
      delay (200);
      digitalWrite (led3, HIGH);
      delay (200);
      digitalWrite (led4, HIGH);
      delay (200);
    }
  }
  else if(status2 == LOW) {
    digitalWrite(led4,HIGH);
    delay(200);
    digitalWrite(led4,LOW);
    delay(200);
    digitalWrite(led3,HIGH);
    delay(200);
    digitalWrite(led3,LOW);
    delay(200);
    digitalWrite(led2,HIGH);
    delay(200);
    digitalWrite(led2,LOW);
    delay(200);
    digitalWrite(led1,HIGH);
    delay(200);
    digitalWrite(led1,LOW);
    delay(200);
  } 
  else{
    digitalWrite (led1, LOW);
    delay (50);
    digitalWrite (led2, LOW);
    delay (50);
    digitalWrite (led3, LOW);
    delay (50);
    digitalWrite (led4, LOW);
    delay (50);
  }
}

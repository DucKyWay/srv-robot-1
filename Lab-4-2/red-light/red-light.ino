int ledRed = 4;
int ledGreen = 5;
int K1 = 8;

void setup(){
    pinMode (ledRed, OUTPUT);
    pinMode (ledGreen, OUTPUT);
    pinMode (K1, INPUT_PULLUP);
}
void loop() {
  int statusK1 = digitalRead (K1);
  if(statusK1 == LOW){
    for(int i=1;i<=5;i=i+1){
      digitalWrite (ledRed, HIGH);
      delay(500);
      digitalWrite (ledRed, LOW);
      delay(500);
    }    
    digitalWrite (ledGreen, HIGH);
    delay(10000);
  }
  else{
    digitalWrite (ledRed, HIGH);
    digitalWrite (ledGreen, LOW);
  }

}

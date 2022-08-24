// #define BUTTON 2
// #define LED 13

// byte lastButtonState = LOW;
// byte ledState = LOW;

// void setup() {
//   pinMode(LED, OUTPUT);
//   pinMode(BUTTON, INPUT);
// }

// void loop() {
//   byte buttonState = digitalRead(BUTTON);
//   if (buttonState != lastButtonState) {
//     lastButtonState = buttonState;
//     if (buttonState == LOW){
//       ledState = (ledState == HIGH) ? LOW: HIGH;
//       digitalWrite(LED, ledState);
//     }
//   }
// }

byte lastButtonState = LOW;
byte ledState = LOW;

void setup() {
  pinMode(13, OUTPUT);
  pinMode(2, INPUT);
}

void loop() {
  byte buttonState = digitalRead(2);
  if (buttonState != lastButtonState) {
    lastButtonState = buttonState;
    if (buttonState == LOW){
      ledState = (ledState == HIGH) ? LOW: HIGH;
      digitalWrite(13, ledState);
    }
  }
}
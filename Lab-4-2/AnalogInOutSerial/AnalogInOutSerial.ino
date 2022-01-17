const int analogInPin = A2;
const int analogOutPin = 9;
const int LED1 = 4;

int sensorValue = 0;
int outputValue = 0;

void setup() {
  pinMode(LED1, OUTPUT);
  Serial.begin(9600);
}

void loop() {
  sensorValue = analogRead(analogInPin);

  if(sensorValue>=700){
    digitalWrite(LED1, LOW);  
  }
  else{
    digitalWrite(LED1, HIGH);
  }
    
  outputValue = map(sensorValue, 0, 1023, 0, 255);
  analogWrite(analogOutPin, outputValue);

  Serial.print("sensor = ");
  Serial.print(sensorValue);
  Serial.print("\t output = ");
  Serial.println(outputValue);
  
  delay(1000);
}

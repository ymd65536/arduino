

const int analogInPin = A0;
const int digitalOutPin = 6;
const int BorderValue = 35;

int sensorValue = 0;

void setup() {
  // 
  Serial.begin(9600);
  pinMode(analogInPin,INPUT);
  pinMode(digitalOutPin,OUTPUT);
}

void loop() {

  sensorValue = analogRead(analogInPin);  
  if(sensorValue > BorderValue){
    digitalWrite(digitalOutPin,HIGH);
  }else{
    digitalWrite(digitalOutPin,LOW);
  }
  Serial.print("sensor = " );
  Serial.println(sensorValue);
  
  delay(2000);
}

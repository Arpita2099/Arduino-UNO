int trackingSensor = 7;   
int sensorValue;

void setup() {
  pinMode(trackingSensor, INPUT);   
  Serial.begin(9600);               
}

void loop() {
  sensorValue = digitalRead(trackingSensor);  

  if (sensorValue == LOW) {
    Serial.println("Object Detected");
  } 
  else {
    Serial.println("No Object Detected");
  }

  delay(200);
}

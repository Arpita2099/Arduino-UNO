int tiltstate;
void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  pinMode(7,INPUT);

}

void loop() {
  // put your main code here, to run repeatedly:
  tiltstate=digitalRead(7);
  if(tiltstate==0){
    Serial.println("Tilt Detected.");
  }
  else{
    Serial.println("Normal State.");
  }

}

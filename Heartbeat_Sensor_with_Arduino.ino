void setup() {
  pinMode(A0,INPUT);
  Serial.begin(9600);
}

void loop() {
  float pluse;
  int sum=0;
  for(int i=0; i<20; i++)
    sum+=analogRead(A0);
  pluse=sum/20.00;
  Serial.println(pluse);
  delay(100);
}

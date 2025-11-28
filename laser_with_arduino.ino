int Laser=7;

void setup() {
  // put your setup code here, to run once:
  pinMode(Laser, OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  digitalWrite(Laser, HIGH);
  delay(5000);
  digitalWrite(Laser, LOW);
  delay(5000);
}

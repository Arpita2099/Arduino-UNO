int a;
int ir_sensor=7;
int led=8;
void setup() {
  // put your setup code here, to run once:
  pinMode(led,OUTPUT);
  pinMode(ir_sensor,INPUT);
  Serial.begin(9600);
}

void loop() {  
  // put your main code here, to run repeatedly:
  a=digitalRead(ir_sensor);
  Serial.println(a);
  delay(300);
  if(a==1){
    digitalWrite(led,LOW);
  }
  else{
    digitalWrite(led,HIGH);
  }
}

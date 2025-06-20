#include <Servo.h>  

const int trig = 10;   
const int echo = 9;    
const int servo = 8;   

Servo myServo;  

void setup() {
  Serial.begin(9600);      
  pinMode(trig, OUTPUT);   
  pinMode(echo, INPUT);    
  myServo.attach(servo);   
  delay(200);            
}

void loop() {

  digitalWrite(trig, LOW);
  delayMicroseconds(2);
  digitalWrite(trig, HIGH);
  delayMicroseconds(10);
  digitalWrite(trig, LOW);


  long duration = pulseIn(echo, HIGH, 30000);  


  float distance = duration * 0.034 / 2;

  Serial.print("Distance: ");
  Serial.print(distance);
  Serial.println(" cm");

  
  if (distance <= 20) {
    myServo.write(90);  
  } else {
    myServo.write(0);   
  }

  delay(500); 
}


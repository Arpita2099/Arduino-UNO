int x_pin = A0;
int y_pin = A1;
int sw_pin = 3;

void setup()
{
  Serial.begin(9600);
  pinMode(A0, INPUT);
  pinMode(A1, INPUT);
  pinMode(3, INPUT);
  digitalWrite(3, HIGH);
}

void loop()
{
 int VRx_data = analogRead(A0);
 int VRy_data = analogRead(A1);
 int sw_data = digitalRead(3);

 Serial.print("VRx_data:");
 Serial.print(VRx_data);
 Serial.print("\t");
 Serial.print("VRy_data:");
 Serial.print(VRy_data);
 Serial.print("\t");
 Serial.print("sw_data:");
 Serial.println(sw_data);
 delay(100);
  
}
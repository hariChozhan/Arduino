void setup()

{
  Serial.begin(9600);
}

void loop()

{
  int val = analogRead(A0); 
  Serial.print("Pin Value   ");
  Serial.println(val);
  delay(2000);
}

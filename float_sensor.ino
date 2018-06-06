int floatsensor=3;   
int led=2;           
int button = 1; 
void setup() 
{ 
Serial.begin(9600); 
pinMode(floatsensor, INPUT_PULLUP); 
pinMode (led, OUTPUT); 
} 
void loop() 
{ 
button = digitalRead(floatsensor); 
  if (button == HIGH) 
  { 
    digitalWrite(led, HIGH);
    Serial.println( "WATER LEVEL - HIGH"); 
  } 
  else 
  { 
    digitalWrite(led, LOW);
    Serial.println( "WATER LEVEL - LOW" ); 
  } 
delay(1000); 
}


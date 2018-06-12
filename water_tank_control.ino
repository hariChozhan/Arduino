int floatsensor=3;   
int led=2;           
int button = 1; 
#define CW 7
void setup() 
{ 
Serial.begin(9600); 
pinMode(floatsensor, INPUT_PULLUP); 
pinMode (led, OUTPUT); 
pinMode(CW, OUTPUT); 
}
void loop() 
{ 
button = digitalRead(floatsensor); 
  if (button == HIGH) 
  { 
    digitalWrite(led, HIGH);
    Serial.println( "WATER LEVEL - HIGH"); 
    digitalWrite(CW, LOW);
  } 
  else 
  { 
    digitalWrite(led, LOW);
    Serial.println( "WATER LEVEL - LOW" );
    digitalWrite(CW,HIGH); 
    delay(1000);
    digitalWrite(CW, LOW);     
   } 
}

#include <Servo.h>
int servoPin = 3;

Servo Servo1, Servo2, Servo3;
void setup() {
  Servo1.attach(1);
  Servo2.attach(2);
  Servo3.attach(3);
}

void loop() {
  Servo1.write(0);
  delay(1000);
  Servo1.write(180);
  delay(1000);
  Servo2.write(0);
  delay(1000);
  Servo2.write(180);
  delay(1000);
  Servo3.write(0);
  delay(1000);
  Servo3.write(180);
  delay(1000);
}

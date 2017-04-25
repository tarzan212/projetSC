#include <Servo.h>

int pateDroite1 = 2;
int pateDroite2 = 3;
int pateDroite3 = 4;
Servo pateServo1,pateServo2,pateServo3;

void setup() {
  pateServo1.attach(pateDroite1);
  pateServo2.attach(pateDroite2);
  pateServo3.attach(pateDroite3);
}





void loop() {
  // put your main code here, to run repeatedly:
  pateServo1.write(0);
  delay(1000);
  pateServo2.write(180);
  delay(1000);

}

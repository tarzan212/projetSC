#include <Servo.h>

int pateDroite1 = 2;
int pateDroite2 = 3;
int pateDroite3 = 4;
Servo pateServo1,pateServo2,pateServo3;

void setup() {
  pateServo1.attach(pateDroite1);
  pateServo2.attach(pateDroite2);
  pateServo3.attach(pateDroite3);

  Serial.begin(9600);
}









void avancerNord() {
  
  
}













void loop() {
  /*

  // put your main code here, to run repeatedly:
  int xy[2];
  String firstVal,secVal;
  
 if(Serial.available()) {
  firstVal = Serial.readStringUntil(',');
  Serial.read();
  secVal = Serial.readStringUntil('\0');

  xy[0] = Int.parseInt(firstVal);
  xy[1] = Int.parseInt(secVal);

  //---------------DEBUT TRAITEMENT

  if(xy[0]>10 && xy[1]>10) {
    //NordEst
  }
  else if(xy[0]>= -10 && xy[0]<= 10 && xy[1]>0) {
    //Est
  }
  else if(xy[0]<=-10 && xy[1]>=10) {
    //SudEst
  }
  else if(xy[0]<0 && xy[1]<=10 && xy[1]>=-10) {
    //Sud
  }
  else if(xy[0]<=-10 && xy[1]<=-10) {
    //SudOuest
  }
  else if(xy[0]<=10 && xy[0]>=-10 && xy[1]< 0 ) {
    //OUest
  }
  else if (xy[0]>=10 && xy[1]<=-10) {
    //NordOuest
  }
  else if (xy[0]>0 && xy[1]<=10 && xy[1]>=-10 ){
    //Nord
  }

  //---------------FIN TRAITEMENT
  
  */

  pateServo1.write(120);
 

}

#include <Servo.h>
int ServPin=9;
int ServPos;
int Pin=8;
int PhPin=A5;
int PhVal;
int w8=1000;
float Light;
Servo Srv;
////////////////////////////////////
void setup() {
  Serial.begin(9600);
 Srv.attach(ServPin);
 pinMode(Pin,OUTPUT);

}
/////////////////////////////////////
void loop() {
  PhVal=analogRead(PhPin);
  Light=PhVal/1023.*100.;
  if (Light>=95){
    ServPos=0;
    Srv.write(ServPos);
    delay(200);
    Serial.println("===============");
    Serial.println("it is dark");
  }
  else if (Light<95){
    ServPos=100;
    Srv.write(ServPos);
    delay(200);
    Serial.println("===============");
    Serial.println("it is bright");
  }
  delay(w8);



  
}

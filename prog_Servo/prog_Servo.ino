#include <Servo.h>
int ServPin=9;
int ServPos=10;
Servo Srv;
////////////////////////////////////
void setup() {
  Serial.begin(9600);
 Srv.attach(ServPin);

}
/////////////////////////////////////
void loop() {
  Serial.println("angle");
  while(Serial.available()==0){}
  ServPos=Serial.parseInt();
 Srv.write(ServPos);

}

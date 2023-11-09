int XPin=A0;
int XVal;
int YPin=A1;
int YVal;
int SWPin=3;
int SWVal;
int INPins[]={XPin,YPin,SWPin};
int NumPins=3;
int dt=500;
/////////////////////////////////////
void setup() {
  Serial.begin(9600);
  for(int j=0;j<NumPins;j++){
    pinMode(INPins[j],INPUT);
  }
  digitalWrite(SWPin,HIGH);
 
}
/////////////////////////////////////
void loop() {
  XVal=analogRead(XPin);
  YVal=analogRead(YPin);
  SWVal=digitalRead(SWPin);

  Serial.println();
  Serial.print("X=");
  Serial.println(XVal);
  Serial.println("==================");
  Serial.print("Y=");
  Serial.println(YVal);
  Serial.println("==================");
  Serial.print("SW=");
  Serial.println(SWVal);
  Serial.println("==================");
  delay(dt);

}

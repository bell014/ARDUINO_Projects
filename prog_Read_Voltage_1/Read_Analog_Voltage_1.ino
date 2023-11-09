int ReadPin = A3;
int ReadVal = 0;
int PinNum= 1;
const int PinsIn[]={ReadPin};

float V2 = 0;
int Pause=1000;
int MaxVal=1023.;
int V=5.;


void setup() {
  for (int i=0;i<PinNum;i++){
    pinMode (PinsIn[i],INPUT);
  }//pinMode for intput pins
  
  Serial.begin(9600);
}


void loop() {
  ReadVal=analogRead(ReadPin);
  V2=(V/MaxVal)*ReadVal;
  Serial.print("-ReadVal = ");
  Serial.println(ReadVal);
  Serial.println("*****");
  Serial.print("-Voltage = ");
  Serial.println(V2);
  Serial.println("====");
  delay(Pause);

}

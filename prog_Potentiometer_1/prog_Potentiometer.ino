int RP=A3;
const int PinsIn[]={RP};
int PinNum = 1;
int RVal;
//setup
float RVoltage ; 
float MaxV = 5;
float MaxR = 1023;
//cal
int space = 1;
int wait = 1500;
//display
void setup() {
  for(int i=0;i<PinNum;i++){
    pinMode(PinsIn[i],INPUT);
  }
  Serial.begin(9600);

}

void loop() {
  for(int i=0;i<space;i++){
    Serial.println(" ");
  } // first space for looks 
  RVal=analogRead(RP);
  RVoltage = (MaxV/MaxR*RVal);

  Serial.print("Read_VAL = ");
  Serial.println(RVal);
  Serial.println("------");
  Serial.print("Read_Voltage = ");
  Serial.println(RVoltage);
  Serial.print("================");
  delay(wait);
  

}

int RPin=A1;
int PVal;
float LedVal;
float Voltage;
const int Wait=1000;
///////////////////
int GLed=10;
const int space=1;

void setup() {
  pinMode(RPin,INPUT);
  pinMode(GLed,OUTPUT);
  Serial.begin(9600);

}

void loop() {
  PVal=analogRead(RPin);
  LedVal=(255./1023.)*PVal;
  Voltage=(5./1023.)*PVal;
  
  analogWrite(GLed,LedVal);

  for(int i=0;i<space;i++ ){
    Serial.println("");
  }

  Serial.print("Voltage = ");
  Serial.print(Voltage);Serial.println(" V");
  Serial.print("========");

  delay(Wait);
}

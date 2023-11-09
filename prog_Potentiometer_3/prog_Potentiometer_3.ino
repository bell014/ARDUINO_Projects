////////////LEDS////////////
int grn=8;
int ylw=9;
int red=10;
const int PinLed[]={grn,ylw,red};
const int LedNum=3;

////////////Serial_Monitor////////////
int ReadPin=A3;
int ReadVal;
float Voltage;
int Wait=1000;
int BaudRate=9600;

////////////SETUP////////////

void setup() {
  for(int i=0;i<LedNum;i++){
    pinMode(PinLed[i],OUTPUT);
  }
  pinMode(ReadPin,INPUT);
  Serial.begin(BaudRate);
}

////////////CODE////////////

void loop() {
////////////Serial_Monitor////////////
  ReadVal=analogRead(ReadPin);
  Voltage=(5./1023.)*ReadVal;
  for(int i=0;i<1;i++){
    Serial.println(" ");
  }

  Serial.print("READVAL = ");
  Serial.println(ReadVal);

  Serial.println("--------");

  Serial.print("VOLTAGE = ");
  Serial.println(Voltage);
  Serial.println("--------");
  Serial.print("STATUS: ");
 
////////////LEDS////////////
  if (Voltage==0.00 || ReadVal<2){
    digitalWrite(grn,LOW);
    digitalWrite(ylw,LOW);
    digitalWrite(red,LOW);
    
    Serial.print("NO VOLTAGE");
  }
  
  if(Voltage<3.00 && ReadVal>=2){
    digitalWrite(grn,HIGH);
    digitalWrite(ylw,LOW);
    digitalWrite(red,LOW);
    
    Serial.print("LOW VOLTAGE");
  }
 
  if(Voltage>2.99 && Voltage<4.00 ){
    digitalWrite(grn,LOW);
    digitalWrite(ylw,HIGH);
    digitalWrite(red,LOW);

    Serial.print("MID VOLTAGE");
  }

  if(Voltage>3.99){
    digitalWrite(grn,LOW);
    digitalWrite(ylw,LOW);

    if(Voltage>3.99 && Voltage<4.50 ){
      analogWrite(red,50);
      Serial.print("HIGH VOLTAGE");
    }

    if(Voltage>4.49){
      analogWrite(red,255);
      Serial.print("VERY HIGH VOLTAGE");
    }
    
  }
  
  Serial.println("");
  Serial.print("==============");
  delay(Wait);



}

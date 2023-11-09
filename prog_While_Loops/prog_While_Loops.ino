int RL=11;
int RP=A5;
int ReadVal;
float Voltage;
const int Space=1;
const int Wait=800;
int j=0;

//////////////////////
void setup() {
  pinMode(RL,OUTPUT);
  pinMode(RP,INPUT);
  Serial.begin(9600);  

}
//////////////////////
void loop() {
  while(j<Space){
    Serial.println("");
    j++;
  }

  ReadVal=analogRead(RP);
  Voltage=(5./1023.)*ReadVal;

  while(ReadVal>1000){
    digitalWrite(RL,HIGH);
    ReadVal=analogRead(RP);
    Voltage=(5./1023.)*ReadVal;

      while(j<Space){
    Serial.println("");
    j++;
    }

    Serial.println("-WARNING: High_Voltage!- ");
    Serial.println("------");
    Serial.print("ReadVal = "); 
    Serial.println(ReadVal);
    Serial.println("------");
    Serial.print("Voltage = "); 
    Serial.println(Voltage);
    Serial.print("============================");
    Serial.println("");
    delay(Wait);
  }
  
  digitalWrite(RL,LOW);
  Serial.println("-SAFE: LOW_Voltage- ");
  Serial.println("------");
  Serial.print("ReadVal = "); 
  Serial.println(ReadVal);
  Serial.println("------");
  Serial.print("Voltage = "); 
  Serial.println(Voltage);
  Serial.print("============================");
  Serial.println("");
  delay(Wait);
  
  
}

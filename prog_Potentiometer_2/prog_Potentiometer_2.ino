int rpin=A3;
int redled=9;
int grnled=8;
const int PinsOUT[]={redled,grnled};
const int Opinnum=2;
int read;
int w8=700;
float v;
void setup() {
  Serial.begin(9600); 
  pinMode (rpin,INPUT);
  for(int i=0;i<Opinnum;i++){
    pinMode(PinsOUT[i],OUTPUT);
  }
  
}

void loop() {
  read=analogRead(rpin);
  if(v>3.99){
    digitalWrite(redled,HIGH); 
    digitalWrite(grnled,LOW); 
  }
  else{
    digitalWrite(redled,LOW); 
    digitalWrite(grnled,HIGH); 
  }

  v=(5./1023.)*read;
  Serial.println(read);
  Serial.println(v);
  delay(w8);

}

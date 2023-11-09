int red=8;
int grn=9;
int blu=10;

int R=2;
int G=4;
int B=8;

int DR=800;
int DG=400;
int DB=200;
int D=2000;

void setup() {
  pinMode(red,OUTPUT);
  pinMode(grn,OUTPUT);
  pinMode(blu,OUTPUT);


}


void loop() {


  while (R!=0){
    digitalWrite(red,HIGH);
    delay(DR);
    digitalWrite(red,LOW);
    delay(DR);
    R--;

  }

  while (G!=0){
    digitalWrite(grn,HIGH);
    delay(DG);
    digitalWrite(grn,LOW);
    delay(DG);
    G--;

  }

  while (B!=0){
    digitalWrite(blu,HIGH);
    delay(DB);
    digitalWrite(blu,LOW);
    delay(DB);
    B--;

  }
R=2;
G=4;
B=8;
delay(D);


}











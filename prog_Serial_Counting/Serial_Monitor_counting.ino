int r; int x = 0; int y = 0;
String Dr = " = " ; String plus = " + ";
int space = 1; int wait = 2000;

void setup(){
  Serial.begin(9600);


}

void loop() {
  for (int i = 0; i < space; i++) {
    Serial.println(" ");
  }
  r = x + y;
  Serial. print (x);
  Serial. print (plus);
  Serial. print (y);
  Serial.print(Dr);
  Serial.print(r);
  Serial.println();
  Serial.print("----------");
  x++;
  y=y+2;
  delay(wait);


}

int R = 1;
int G = 2;
int B = 3;

void setup() {
  pinMode(13,OUTPUT);
  pinMode(6, OUTPUT);
  pinMode(7, OUTPUT);
  pinMode(8, OUTPUT);
}
void loop() {
  digitalWrite(13,LOW);
  
  while (R != 0) {
    digitalWrite(8, HIGH);
    delay(500);
    digitalWrite(8, LOW);
    delay(500);
    R--;
  }


  while (G != 0) {
    digitalWrite(7, HIGH);
    delay(500);
    digitalWrite(7, LOW);
    delay(500);
    G--;
  }

  while (B != 0) {
    digitalWrite(6, HIGH);
    delay(500);
    digitalWrite(6, LOW);
    delay(500);
    B--;
  }
    delay(2000);
    R = 1;
    G = 2;
    B = 3;
}

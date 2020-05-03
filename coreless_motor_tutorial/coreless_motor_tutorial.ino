int turns = 10;
int turnAmount = 10;
const int m = 9;

void setup() {
  pinMode(m,OUTPUT);
  pinMode(LED_BUILTIN,OUTPUT);
  delay(1000);

}

void loop() {
  analogWrite(m,turns);
  delay(1000);
  turns += turnAmount;
  if(turns > 255){
  turnAmount = -10;
  digitalWrite(LED_BUILTIN,HIGH);
  delay(100);
  digitalWrite(LED_BUILTIN,LOW);
  }
  else if (turns <= 0) {
  turnAmount = 10;
  digitalWrite(LED_BUILTIN,HIGH);
  delay(100);
  digitalWrite(LED_BUILTIN,LOW);
  }

}

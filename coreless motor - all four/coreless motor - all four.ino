int turns = 10;
int turnAmount = 10;
int convert(int);
const int motor1 = 3;
const int motor2 = 5;
const int motor3 = 6;
const int motor4 = 9;

void setup() {
  pinMode(motor1,OUTPUT);
  pinMode(motor2,OUTPUT);
  pinMode(motor3,OUTPUT);
  pinMode(motor4,OUTPUT);
  pinMode(LED_BUILTIN,OUTPUT);
  delay(1000);

}

void loop() {
  analogWrite(motor1,turns);
  analogWrite(motor2,turns);
  analogWrite(motor3,turns);
  analogWrite(motor4,turns);
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

int convert(int stick){
  if(stick>1800)
  stick == 1800;
  else if (stick<1100)
  stick == 1100;
  return (stick-1000)*0.256;
}

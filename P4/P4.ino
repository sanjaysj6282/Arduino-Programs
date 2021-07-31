#define IR_pin 8
#define led 3
int flag=0;
void setup() {
  Serial.begin(9600);
  pinMode(IR_pin,INPUT);
  pinMode(led,OUTPUT);
  // put your setup code here, to run once:
}

void loop() {
  if(digitalRead(IR_pin) == HIGH && flag == 0)
  {
    digitalWrite(led,HIGH);
    flag=1;
    delay(1000);
  }
  if(digitalRead(IR_pin) == HIGH && flag == 1)
  {
    digitalWrite(led,LOW);
    delay(500);
    flag=0;
  }
  // put your main code here, to run repeatedly:

}

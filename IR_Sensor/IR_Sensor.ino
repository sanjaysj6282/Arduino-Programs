int led = 2;
int proximitySensor = 13;
void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  pinMode(led,OUTPUT);
  pinMode(proximitySensor,INPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  int state = digitalRead(proximitySensor);
  Serial.println(state);
  if(state==HIGH){
    digitalWrite(led,HIGH);
  }
  else{
    digitalWrite(led,LOW);
  }
  delay(1000);
}

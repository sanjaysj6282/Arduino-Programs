#define IR_sensor_pin 8 
#define led 3 
void setup() {
//  Serial.begin(9600);
  pinMode(IR_sensor_pin,INPUT);
  pinMode(led,OUTPUT);
}

void loop() {
  int val = digitalRead(IR_sensor_pin);
  if(val == HIGH){
//      Serial.print(1);
    digitalWrite(led,LOW);
    delay(1000);
  }
  else{
    digitalWrite(led,HIGH);
    delay(1000);
  }
}

#define pot_in A0
int pot_in_value=0;
void setup() {
  pinMode(pot_in,INPUT);
  Serial.begin(9600);
  // put your setup code here, to run once:

}

void loop() {
  pot_in_value = analogRead(pot_in); 
  Serial.print(pot_in_value);
  delay(1000);
//  Serial.print();
//  delay(1000);

}

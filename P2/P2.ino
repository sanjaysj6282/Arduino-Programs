//int led = 3;
#define led 3
int brightness = 0;
int added_brightness=1;
void setup() {
  pinMode(led,OUTPUT);
  // put your setup code here, to run once:

}

void loop() {
  if(brightness>255){
    brightness = 0; 
  }
  analogWrite(led,brightness);
  delay(10);
  brightness = brightness + added_brightness;
  
 
  // put your main code here, to run repeatedly:

}

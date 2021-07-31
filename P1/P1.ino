#define led 3
int constBrightness = 255;
int brightness = 255;
int fadeAmount = 1;

void setup() {
  pinMode(led,OUTPUT);
}

void loop() {
//  if(brightness>=0 and brightness<=255){
//    analogWrite(led,brightness);
//    delay(1000);
//    brightness=brightness+fadeAmount;
//  }
//  else{
//      brightness=constBrightness;
//      delay(1000);
//  }
  analogWrite(led,brightness);
  delay(10);
  brightness=brightness-fadeAmount;

  if(brightness<0){
      brightness=0;
      fadeAmount=-fadeAmount;
  }
   if(brightness>255){
      brightness=255;
      fadeAmount=-fadeAmount;
  }
}

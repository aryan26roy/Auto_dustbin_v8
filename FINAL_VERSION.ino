#define IRMod 13
#include <Servo.h>
Servo myservo;
int pos;
void setup() {
  // put your setup code here, to run once:
pinMode(IRMod,INPUT);
Serial.begin(9600);
myservo.attach(11);
}

void loop() {
  int n=digitalRead(IRMod);
  if(n==0)
  {
    
    Serial.println("ObjectDetected");
    for(pos=90;pos>=0;pos-=1)
    {
      myservo.write(pos);
      delay(10);
      }
       delay(3000);
    
    for(pos=0;pos<=90;pos+=1){
      myservo.write(pos);
      delay(10);
    }
    delay(2000);
    
  }
  
  // put your main code here, to run repeatedly:

}

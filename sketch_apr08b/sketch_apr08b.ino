#include <Servo.h>

Servo myservo;
int obs;

void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  pinMode(A0, INPUT);
  digitalWrite(A0, LOW);
  myservo.attach(9);
  myservo.write(0);
}

void loop() {
  // put your main code here, to run repeatedly:
  obs =  analogRead(A0);
  Serial.println(obs);
  if(obs > 8){
    myservo.write(40);
    delay(3); 
  }
  else{
    myservo.write(0);
  }
  

}

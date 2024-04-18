
#include <Servo.h>
int button1Pin = 4;
int button2Pin = 6;
int servo2Pin = 5;
int servo1Pin = 3;
Servo Servo1;
Servo Servo2;
Servo Servo3;
int servo3Pin = 7;
int servoPosition = 0;
int button3Pin = 8;

void setup() {
  // put your setup code here, to run once:
  Servo1.attach(servo1Pin);
  
  Servo2.attach(servo2Pin);
  Servo1.write(90);
  Servo2.write(90);
  Servo3.attach(servo3Pin);
  Servo3.write(180);
  


}

void loop() {
  // put your main code here, to run repeatedly:
   int button3State = digitalRead(button3Pin);
  
  int button1State = digitalRead(button1Pin);
   int button2State = digitalRead(button2Pin);



  if(button1State == HIGH && button3State == HIGH)
  {
    Servo1.write(180);
  }
  else if(button1State == HIGH && button3State != HIGH)
  {
    Servo1.write(0);
  }
  else{
      Servo1.write(90);
  }
  
  if(button2State == HIGH && button3State == HIGH)
  {
    Servo2.write(150);
  }
  else if(button2State == HIGH && button3State != HIGH)
  {
    Servo2.write(0);
  }
  else
  {
    Servo2.write(90);
  }
 

   
    
    
  

}
 

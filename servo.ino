
/*
    1.  If an object is detected, turn the 
      servo motor 10 degrees
    2.  If there is no object detected, 
      turn the servo motor 150 degrees
  */

  #include <Servo.h>
  Servo Serv;

  int pinIR=5;
  int pinServo=3;
  int val=0;

  void setup(){
    Serv.attach(pinServo);
  }

  void loop(){
    val = digitalRead(pinIR);
  
    if (val ==0){
      Serv.write(150);
      delay(100);
    }
    else
    {
      Serv.write(0);
      delay(1000000);
    }
  }

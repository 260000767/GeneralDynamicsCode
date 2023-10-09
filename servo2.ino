
/*
    1.  If an object is detected, stop the servo
    2.  If there is no object detected, 
      turn the servo motor 150 degrees
  */

  #include <Servo.h>
  Servo Serv2;

  int pinIR=5;
  int pinServo=3;
  int val=0;

  void setup(){
    Serv2.attach(pinServo);
  }

  void loop(){
    val = digitalRead(pinIR);
  
    if (val ==0){
      Serv2.write(150);
      delay(100);
    }
    else
    {
      Serv2.write(0);
      delay(1000000);
    }
  }

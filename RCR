#include<AFMotor.h>
AF_DCMotor motor1(1, Motor12_1KHz);
AF_DCMotor motor2(2, Motor12_1KHz);
AF_DCMotor motor3(3, Motor34_1KHz);
AF_DCMotor motor4(4, Motor34_1KHz);
void setup() {
  Serial.begin(9600); 
}
void loop() {
 if(Serial.available() > 0)
{
  command = Serial.read();
  stop();
  switch(command)
  {case 'F';
  forward();
  break;
  case 'B';
  backward();
  break;
  case 'L';
  left();
  break;
  case 'R';
  right();
  break;
  }
}
}
void forward()
{
  motor1.setSpeed(225);
  motor1.run(FORWARD);
  motor2.setSpeed(225);
  motor2.run(FORWARD);
  motor3.setSpeed(225);
  motor3.run(FORWARD);
  motor4.setSpeed(225);
  motor4.run(FORWARD);
}
void back()
{
motor1.setSpeed(225);
  motor1.run(BACKWARD);
  motor2.setSpeed(225);
  motor2.run(BACKWARD);
  motor3.setSpeed(225);
  motor3.run(BACKWARD);
  motor4.setSpeed(225);
  motor4.run(BACKWARD);  
}
void left()
{ motor1.setSpeed(225);
  motor1.run(BACKWARD);
  motor2.setSpeed(225);
  motor2.run(FORWARD);
  motor3.setSpeed(225);
  motor3.run(FORWARD);
  motor4.setSpeed(225);
  motor4.run(BACKWARD);  
}
void right()
{
  motor1.setSpeed(225);
  motor1.run(FORWARD);
  motor2.setSpeed(225);
  motor2.run(BACKWARD);
  motor3.setSpeed(225);
  motor3.run(BACKWARD);
  motor4.setSpeed(225);
  motor4.run(FORWARD); 
}
void stop()
{
  motor1.setSpeed(0);
  motor1.run(RELEASE);
  motor2.setSpeed(0);
  motor2.run(RELEASE);
  motor3.setSpeed(0);
  motor3.run(RELEASE);
  motor4.setSpeed(0);
  motor4.run(RELEASE);
}

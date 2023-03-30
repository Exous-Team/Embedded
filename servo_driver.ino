#include <Servo.h>

Servo servo1; //create servo object

int servo1_pin = 1; // declare servo pin

void servo_attach(){
  servo1.attach(servo1_pin); // attach servo to pin in ard
}

void servo_write(int degree){
    switch (degree) {
    case 0:
      servo1.write(0);
      break;
    case 90:
      servo1.write(90);
      break;
    case 180:
      servo1.write(180);
      break;

    default:
      break;
  }
}

void __delay(int amount){
  delay(2000);
}

void setup() {
  servo_attach();
}

void loop() {
  servo_write(90); // move servo to 90 degree
  __delay(1000); // make custom delay
}
//Proyek #43 : Dasar Kendali Motor Servo
#include <Servo.h>
Servo servo1;
Servo servo2;
int sudut = 0;

void setup() {
  servo1.attach(9);
  servo2.attach(7);
}

void loop() {
  /*start dari sudut 0 derajat sampai 180 derajat dan set langkah tiap 1 derajat (sudut = sudut +1)*/
  for (sudut = 0; sudut <180; sudut +=1){
    servo1.write(sudut);
    servo2.write(sudut);
    delay (15);
  }
  /*start dari sudut 180 derajat ke 0 derajat dan set langkah tiap 1 derajat (sudut=sudut-1)*/
  for (sudut = 180; sudut>=1; sudut -=1){
    servo1.write(sudut);
    servo2.write(sudut);
    delay (15);
  }
}

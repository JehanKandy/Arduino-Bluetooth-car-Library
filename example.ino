#include <Jehan_BT_car.h>
int val;

//pin in L2985 Motor Contral
int in1 = 5; //in1
int in2 = 6; //in2
int in3 = 7; //in3
int in4 = 8; //in4

//difine pins

Jehan_BT_car jehan(in1,in2,in3,in4);


void setup() {
  jehan.PinSetup();
  Serial.begin(9600);
}

void loop() {
  if(Serial.available()){
    val = Serial.read();
  }

  if(val == '1'){
    jehan.forward_car(); // forward
  }
  else if(val == '2'){
    jehan.backward_car();// backward
  }
  else if(val == '3'){
    jehan.left_car();// left
  }
  else if(val == '4'){
    jehan.right_car();// right
  }
  else if(val == '5'){
    jehan.stop_car();// stop
  }


}

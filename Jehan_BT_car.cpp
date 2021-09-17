#include "Jehan_BT_car.h"
#include "Arduino.h"

 Jehan_BT_car::Jehan_BT_car (int in1,int in2, int in3,int in4){

  diode1=in1;
  diode2=in2;
  diode3=in3;
  diode4=in4;


}

void Jehan_BT_car::PinSetup() {
  pinMode(diode1,OUTPUT);
  pinMode(diode2,OUTPUT);
  pinMode(diode3,OUTPUT);
  pinMode(diode4,OUTPUT);

}

void Jehan_BT_car::stop_car()
{
    digitalWrite(diode1,LOW);
    digitalWrite(diode2,LOW);
    digitalWrite(diode3,LOW);
    digitalWrite(diode4,LOW);
}

void Jehan_BT_car:: forward_car(){
    digitalWrite(diode1,HIGH);
    digitalWrite(diode2,LOW);
    digitalWrite(diode3,HIGH);
    digitalWrite(diode4,LOW);
}

void Jehan_BT_car::backward_car() {
    digitalWrite(diode1,LOW);
    digitalWrite(diode2,HIGH);
    digitalWrite(diode3,LOW);
    digitalWrite(diode4,HIGH);
}

void Jehan_BT_car::left_car(){
    digitalWrite(diode1,HIGH);
    digitalWrite(diode2,LOW);
    digitalWrite(diode3,LOW);
    digitalWrite(diode4,HIGH);
}
void Jehan_BT_car::right_car() {

    digitalWrite(diode1,LOW);
    digitalWrite(diode2,HIGH);
    digitalWrite(diode3,HIGH);
    digitalWrite(diode4,LOW);


}

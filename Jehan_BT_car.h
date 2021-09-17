#ifndef Jehan_BT_car_h
#define Jehan_BT_car_h
#include "Arduino.h"

class Jehan_BT_car {

private:
    int diode1;
    int diode2;
    int diode3;
    int diode4;

public:

    Jehan_BT_car(int in1, int in2, int in3, int in4);
    void PinSetup();
    void stop_car();
    void forward_car();
    void backward_car();
    void left_car();
    void right_car();



};




#endif

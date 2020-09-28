#pragma once
#include "Vehicle.h"

class Car: public Vehicle {

public:

    Car(int x, int y, int s, int d, ofColor c): Vehicle(x,y,s,d,c) {}
    Car(int x, int y): Vehicle(x,y,1,1,ofColor(255,255,255)) {}
    Car(): Car(0,0,0,1,ofColor(255,255,255)) {}

    virtual void draw();

};

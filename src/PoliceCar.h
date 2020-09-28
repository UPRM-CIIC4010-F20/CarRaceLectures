#pragma once
#include "ofMain.h"
#include "Car.h"

class PoliceCar : public Car {

public:

    PoliceCar(int x, int y, int s, int d, ofColor c): Car(x,y,s,d,c) {}
    PoliceCar(int x, int y):PoliceCar(x,y,1,1,ofColor(255,255,255)) {}
    PoliceCar(): PoliceCar(0,0,0,1,ofColor(255,255,255)) {}
    virtual void draw();

};

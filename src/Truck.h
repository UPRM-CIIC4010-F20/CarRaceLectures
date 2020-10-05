
#include "Vehicle.h"


class Truck: public Vehicle {

public:

    Truck(int x, int y, int s, int d, ofColor c): Vehicle(x,y,s,d,c) {}
    Truck(int x, int y): Vehicle(x,y,1,1,ofColor(255,255,255)) {}
    Truck(): Truck(0,0,0,1,ofColor(255,255,255)) {}

    virtual void draw();
    virtual bool equals(Raceable* r);

};
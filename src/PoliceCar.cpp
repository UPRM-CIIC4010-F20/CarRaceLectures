#include "ofApp.h"
#include "PoliceCar.h"

void PoliceCar::draw()
{
    Car::draw();
    //Draw Biombo
    ofDrawCircle(getX() + 30, getY() - 3, 5);

}
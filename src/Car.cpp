#include "ofApp.h"
#include "Car.h"

void Car::draw()
{
    ofSetColor(this->getColor());
    // Draw body
    ofDrawRectangle(getX() + 0, getY() + 10, 60, 10);
    // Draw roof and windshields
    ofDrawLine(getX() + 10, getY() + 10, getX() + 20, getY() + 0);
    ofDrawLine(getX() + 20, getY() + 0, getX() + 40, getY() + 0);
    ofDrawLine(getX() + 40, getY() + 0, getX() + 50, getY() + 10);

    ofSetColor(ofColor(255,255,255));
    // Draw tires
    ofDrawCircle(getX() + 15, getY() + 25, 5);
    ofDrawCircle(getX() + 45, getY() + 25, 5);

}
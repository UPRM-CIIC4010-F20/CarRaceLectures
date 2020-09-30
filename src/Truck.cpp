#include "Truck.h"

void Truck::draw() {

    ofSetColor(this->getColor());
    // Draw cargo
    ofDrawRectangle(getX() + 0, getY(), 40, 20);
    ofDrawRectangle(getX() + 40, getY() + 10, 20, 10);
    
    // Draw roof and windshields
    // ofDrawLine(getX() + 10, getY() + 10, getX() + 20, getY() + 0);
    // ofDrawLine(getX() + 20, getY() + 0, getX() + 40, getY() + 0);
    ofDrawLine(getX() + 40, getY() + 0, getX() + 50, getY() + 10);

    ofSetColor(ofColor(255,255,255));
    // Draw tires
    ofDrawCircle(getX() + 15, getY() + 25, 5);
    ofDrawCircle(getX() + 20, getY() + 25, 5);
    ofDrawCircle(getX() + 45, getY() + 25, 5);

}
#include "ofApp.h"
#include "Car.h"

void Car::draw()
{
    ofDrawRectangle(xPos + 0, yPos + 10, 60, 10);
    // Draw tires
    ofDrawCircle(xPos + 15, yPos + 25, 5);
    ofDrawCircle(xPos + 45, yPos + 25, 5);
    // Draw roof and windshields
    ofDrawLine(xPos + 10, yPos + 10, xPos + 20, yPos + 0);
    ofDrawLine(xPos + 20, yPos + 0, xPos + 40, yPos + 0);
    ofDrawLine(xPos + 40, yPos + 0, xPos + 50, yPos + 10);
}
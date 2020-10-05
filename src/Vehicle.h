#pragma once
#include "ofMain.h"
#include "Raceable.h"

class Vehicle: public Raceable {
private:
    int xPos;
    int yPos;
    int speed;  // Speed in pixels per frame
    int direction; // 1 = left to right, -1 = right to left
    ofColor color;

public:

    Vehicle(int x, int y, int s, int d, ofColor c) {
        xPos = x; yPos = y; speed = s; direction = d;
    }
    Vehicle(int x, int y) { xPos = x; yPos = y; speed = 0; direction = 1; }
    Vehicle(): Vehicle(0,0,0,1,ofColor(255,255,255)) {  }

    int getX() { return xPos; }
    int getY() { return yPos; }
    int getSpeed() { return speed; }
    int getDirection() { return direction; }
    ofColor getColor() { return color; }

    void setX(int x) { xPos = x; }
    void setY(int y) { yPos = y; }
    void setSpeed(int s) { speed = s; }
    void setDirection(int d) { direction = d; }
    void setColor(ofColor c) { color = c; }

    virtual void draw() = 0; // Pure virtual method

    virtual bool equals(Raceable* r) = 0;

};

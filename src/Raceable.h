#pragma once
#include "ofMain.h"

class Raceable {

public:

    virtual int getX() = 0;
    virtual int getY() = 0;
    virtual int getSpeed() = 0;
    virtual int getDirection() = 0;
    virtual ofColor getColor() = 0;

    virtual void setX(int x) = 0;
    virtual void setY(int y) = 0;
    virtual void setSpeed(int s) = 0;
    virtual void setDirection(int d) = 0;
    virtual void setColor(ofColor c) = 0;

    virtual bool equals(Raceable* r) = 0;

    virtual void draw() = 0; // Pure virtual method

};
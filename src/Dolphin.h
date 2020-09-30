#pragma once
#include "ofMain.h"
#include "Raceable.h"

class Dolphin: public Raceable {

    private:
    int myX;
    int myY;
    int mySpeed;
    ofImage image;

    public:

    Dolphin(int x, int y);

    virtual int getX() { return myX; };
    virtual int getY() { return myY; };
    virtual int getSpeed() { return mySpeed; };
    virtual int getDirection() { return 1; };
    virtual ofColor getColor() { return ofColor(255,255,255); };  // Consider removing colors from Raceable

    virtual void setX(int x) { myX = x; };
    virtual void setY(int y) { myY = y; };
    virtual void setSpeed(int s) { mySpeed = s; };
    virtual void setDirection(int d) {};
    virtual void setColor(ofColor c) {};

    virtual void draw();

};

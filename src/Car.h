#pragma once

class Car {
private:
    int xPos;
    int yPos;
    int speed;  // Speed in pixels per frame
    int direction; // 1 = left to right, -1 = right to left

public:

    Car(int x, int y, int s, int d) {
        xPos = x; yPos = y; speed = s; direction = d;
    }
    Car(int x, int y) { xPos = x; yPos = y; speed = 0; direction = 1; }
    Car() { xPos = 0; yPos = 0; speed = 0; direction = 1; }

    int getX() { return xPos; }
    int getY() { return yPos; }
    int getSpeed() { return speed; }
    int getDirection() { return direction; }

    void setX(int x) { xPos = x; }
    void setY(int y) { yPos = y; }
    void setSpeed(int s) { speed = s; }
    void setDirection(int d) { direction = d; }

    void draw();

};

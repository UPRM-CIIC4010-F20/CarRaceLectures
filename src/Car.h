

class Car {
private:
    int xPos;
    int yPos;

public:

    Car(int x, int y) { xPos = x; yPos = y; }

    int getX() { return xPos; }
    int getY() { return yPos; }

    void setX(int x) { xPos = x; }
    void setY(int y) { yPos = y; }

    void draw();

};

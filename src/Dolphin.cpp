#include "Dolphin.h"

Dolphin::Dolphin(int x, int y)
{
    myX = x;
    myY = y;
    image.load("dolphin.png");
}

void Dolphin::draw()
{
    image.draw(myX, myY, 30, 20);
}
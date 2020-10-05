#include "Dolphin.h"

Dolphin::Dolphin(int x, int y)
{
    myX = x;
    myY = y;
    image.load("dolphin.png");
}

Dolphin::Dolphin(int x, int y, ofImage image)
{
    myX = x;
    myY = y;
    this->image = image;
}

Dolphin::Dolphin(int x, int y, string pathname)
{
    myX = x;
    myY = y;
    image.load(pathname);
}

void Dolphin::draw()
{
    image.draw(myX, myY, 30, 20);

}

void Dolphin::eat()
{
    cout << " I am eating" << endl;
}
string Dolphin::yell()
{
    return "Some dolphin sound";
}

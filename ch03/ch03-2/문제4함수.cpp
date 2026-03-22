#include <iostream>
#include "rect.h"


Rectangle::Rectangle() : Rectangle(1, 1, 1, 1) {}
Rectangle::Rectangle(int x, int y) : Rectangle(x, y, 1, 1) {}
Rectangle::Rectangle(int x, int y, int width, int height)
    : x(x), y(y), width(width), height(height) {}
int Rectangle::getArea() { return width * height; }
int Rectangle::getCircum() { return (width + height) * 2; }
Point Rectangle::getCoo() 
{
    Point p;
    p.x = x + width;
    p.y = y - height;
    return p;
}

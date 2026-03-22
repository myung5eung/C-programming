#include "rect.h"

Rectangle::Rectangle() : Rectangle(1, 1, 1, 1) {}
Rectangle::Rectangle(int a, int b) : x(a), y(b), width(1), height(1) {}
Rectangle::Rectangle(int a, int b, int c, int d) : x(a), y(b), width(c), height(d) {}

int Rectangle::getVolume() { return width * height; }

int Rectangle::getPerimeter() { return 2 * (width + height); }

Point Rectangle::getBottomRight() {
	Point p;
	p.x = x + width;
	p.y = y - height;
	return p;
}

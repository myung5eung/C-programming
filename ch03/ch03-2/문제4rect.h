#ifndef _RECTANGLE_H_
#define _RECTANGLE_H_

struct Point { int x, y; };

class Rectangle {
public:
	int x, y, width, height;

	Rectangle();
	Rectangle(int a, int b);
	Rectangle(int a, int b, int c, int d);

	int getVolume();
	int getPerimeter();
	Point getPoint();
};

#endif

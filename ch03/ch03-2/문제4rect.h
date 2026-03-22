#ifndef _RECTANGLE_H_
#define _RECTANGLE_H_

struct Point {
    int x;
    int y;
};

class Rectangle {
    int width, height;
    int x, y;
public:
    Rectangle();
    Rectangle(int x, int y);
    Rectangle(int x, int y, int width, int height);

    Point getCoo();
    int getArea();
    int getCircum();
    
};

#endif

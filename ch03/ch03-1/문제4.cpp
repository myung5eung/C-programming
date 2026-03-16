#include <iostream>
using namespace std;
class Rectangle{
public:
	int width=3;
	int height=4;
	int x=1, y=2;
	int getArea();
	int getCircum();
	void getCoo();
};

int Rectangle::getArea() {
	return width * height;
}

int Rectangle::getCircum() {
	return (width + height) * 2;
}

void Rectangle::getCoo() {
	cout << "(" << x + width << "," << y - height << ")";
}

int main(void)
{
	Rectangle rect;

	cout << "사각형의 면적은 " << rect.getArea() << "\n";
	cout << "사각형의 둘레길이는 " << rect.getCircum() << "\n";
	cout << "사각형의 우측하단 좌표는 ";
	rect.getCoo();

	return 0;
}

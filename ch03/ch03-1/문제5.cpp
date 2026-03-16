# Title : 실습과제4번에서 키보드로 입력받는 기능추가
# Author : myungseungyeon
# Data : 26.3.16

#include <iostream>
using namespace std;
class Rectangle{
public:
	int width;
	int height;
	int x, y;
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
	cout << "사각형의 좌측상단 좌표(x,y): ";
	cin >> rect.x>>rect.y;
	cout << "사각형의 폭과 높이(width,height): ";
	cin >> rect.width >> rect.height;

	cout << "사각형의 면적은 " << rect.getArea() << "\n";
	cout << "사각형의 둘레길이는 " << rect.getCircum() << "\n";
	cout << "사각형의 우측하단 좌표는 ";
	rect.getCoo();

	return 0;
}

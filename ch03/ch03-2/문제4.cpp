// *******************************************
// 제목: 사각형 클래스 위임,타켓생성자 활용
// 날짜: 26년 3월 18일
// 작성자: 명승연
// *******************************************

#include <iostream>
using namespace std;
class Rectangle{
	int width, height;
	int x, y;
public:
Rectangle();
Rectangle(int w, int h);
Rectangle(int x, int y, int width, int height);
int getArea() { return width * height; }
int getCircum(){ return (width + height) * 2; }
void getCoo(){ cout << "(" << x + width << "," << y - height << ")"; }
};

Rectangle::Rectangle() : Rectangle(1, 1, 1, 1) {}
Rectangle::Rectangle(int x, int y):Rectangle(x, y, 1, 1) {}
Rectangle::Rectangle(int x, int y, int width, int height):x(x), y(y), width(width), height(height) {
}
int main() {
	Rectangle rect1;					 // 모든멤버변수를1로초기화
	Rectangle rect2(3, 5);				// x=3,y=5,width=height=1로초기화
	Rectangle rect3(3, 5, 2, 4);		// x=3,y=5,width=2, height=4로초기화
	cout << "rect1의 면적은: " << rect1.getArea() << "\n";
	cout << "rect2의 둘레길이는: " << rect2.getCircum() << "\n";
	cout << "rect3의 우측하단 좌표는: ";
	rect3.getCoo();
	return 0;
}

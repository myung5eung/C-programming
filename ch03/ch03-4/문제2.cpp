// *******************************************
// 제목: 객체지향형 언어에 맞게 수정
// 날짜: 26년 3월 26일
// 작성자: 명승연
// *******************************************
#include <iostream>
using namespace std;
class Circle {
	int radius;
public:
	Circle();
	void setRadius(int r);
	int getRadius();
};
Circle::Circle(): radius(1) { }
void Circle::setRadius(int r) {
	if (r < 0) { 
		cout << "음수는 입력할 수 없습니다." << "\n";
		radius = 1;
	}
	else radius = r;
}

int Circle::getRadius()
{
	return radius;
}
int main() {
	Circle waffle;
	waffle.setRadius(5);
	cout << " 원의 반지름은 " << waffle.getRadius() << endl;
	return 0;
}

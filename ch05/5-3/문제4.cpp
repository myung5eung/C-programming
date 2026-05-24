// *******************************************
// 제목: 참조리턴
// 날짜: 26년 5월 25일
// 작성자: 명승연
// *******************************************
#include <iostream>
#include <string>
using namespace std;
class Circle {
	int radius;
public:
	Circle(int r):radius(r){}
	int getRadius() { return radius; }
	Circle& plus(int a) {
		radius += a;
		return *this;
	}

	Circle& minus(int a) {
		radius -= a;
		return *this;
	}
};
int main() {
	Circle a(5);
	a.plus(1).plus(2).plus(3).minus(3).minus(2).minus(1).minus(5);
	cout << "객체 a의 반지름은 " << a.getRadius();
	return 0;
}

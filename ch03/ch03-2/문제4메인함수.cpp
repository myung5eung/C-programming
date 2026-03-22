// *******************************************
// 제목: 사각형 클래스 위임,타켓생성자 활용
// 날짜: 26년 3월 18일
// 작성자: 명승연
// *******************************************

#include <iostream>
#include "rect.h"
using namespace std;

int main() {
	Rectangle rect1;
	Rectangle rect2(3, 5);
	Rectangle rect3(3, 5, 2, 4);

	cout << "rect1의 면적은 " << rect1.getVolume() << "\n";
	cout << "rect2의 둘레길이는 " << rect2.getPerimeter() << "\n";

	Point br = rect3.getBottomRight();
	cout << "rect3의 우측하단의 좌표는 ("
		<< br.x << ", " << br.y << ")" << "\n";

	return 0;
}

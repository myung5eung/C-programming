// *******************************************
// 제목: 참조를 이용하여 코드 수정
// 날짜: 26년 5월 25일
// 작성자: 명승연
// *******************************************
#include <iostream>
#include <string>
using namespace std;
void swap(int&x, int&y);
int main(void)
{
	int x, y;
	cout << "정수x를 입력 하시오: ";
	cin >> x;
	cout << "정수y를 입력 하시오: ";
	cin >> y;
	cout << "swap함수 호출 전 x=" << x << ". y=" << y << endl;
	swap(x, y);
	cout << "swap함수 호출 후 x=" << x << ". y=" << y << endl;

	return 0;
}
void swap(int& x, int& y)
{
	int temp = x;
	x = y;
	y = temp;
}

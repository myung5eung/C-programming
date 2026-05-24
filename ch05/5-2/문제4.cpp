// *******************************************
// 제목: 참조
// 날짜: 26년 5월 25일
// 작성자: 명승연
// *******************************************
#include <iostream>
#include <string>
using namespace std;
void get_parts(double r, int&x, double&y);
int main(void)
{
	double real;
	cout << "실수를 입력하시오: ";
	cin >> real;
	int x;
	double y;
	get_parts(real, x, y);
	cout << "정수부: " << x << endl;
	cout << "소수부: " << y << endl;
	return 0;
}
void get_parts(double r, int& x, double& y)
{
	x = int(r);
	y = r - x;
}

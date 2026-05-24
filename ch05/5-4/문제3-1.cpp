// *******************************************
// 제목: 교재문제 1
// 날짜: 26년 5월 25일
// 작성자: 명승연
// *******************************************
#include <iostream>
#include <string>
using namespace std;
void twice(int& n);
int main(void)
{
	int n = 12;
	twice(n);
	cout << n;
}
void twice(int& n)
{
	n *= 2;
}

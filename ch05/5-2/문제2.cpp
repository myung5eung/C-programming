// *******************************************
// 제목: 참조를 이용하여 코드 수정
// 날짜: 26년 5월 25일
// 작성자: 명승연
// *******************************************
#include <iostream>
#include <string>
using namespace std;
void add2(int& value);
int main(void)
{
	int number;
	cout << "정수를입력하세요: ";
	cin >> number;
	add2(number);
	cout << "2만큼증가한값:" << number << endl;
	return 0;
}
void add2(int& value)
{
	value += 2;
}

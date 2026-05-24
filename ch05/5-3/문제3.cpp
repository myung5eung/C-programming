// *******************************************
// 제목: 참조에 의한 호출
// 날짜: 26년 5월 25일
// 작성자: 명승연
// *******************************************
#include <iostream>
#include <string>
using namespace std;
void SwapString(string& s1, string& s2);
int main(void)
{
	string s1("hello");
	string s2("world");
	cout <<"교환전 문자열 " << s1+" " << s2 << endl;
	SwapString(s1, s2);
	cout << "교환루 문자열 " << s1+" " << s2 << endl;
	return 0;
}
void SwapString(string& s1, string& s2)
{
	string temp = s1;
	s1 = s2;
	s2 = temp;
}

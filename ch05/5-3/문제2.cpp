// *******************************************
// 제목: 참조에 의한 호출
// 날짜: 26년 5월 25일
// 작성자: 명승연
// *******************************************
#include <iostream>
#include <string>
using namespace std;
void Uppercase(string& a);
int main(void)
{
	string s1("hello");
	cout << "변환전 문자열 " << s1 << endl;
	Uppercase(s1);
	cout << "변환후 문자열 " << s1 << endl;
	return 0;
}
void Uppercase(string& a)
{
	for (int i = 0; i < a.length(); i++)
	{
		a[i] = toupper(a[i]);
	}
}

// *******************************************
// 제목: 값에 의한 호출
// 날짜: 26년 5월 25일
// 작성자: 명승연
// *******************************************
#include <iostream>
#include <string>
using namespace std;
string GetLatterString(string a, string b);
int  main(void)
{
	string s1("hello");
	string s2("world");
	string res;
	res = GetLatterString(s1, s2);
	cout << "사전에서 뒤에 나오는 문자열은" << res << "입니다. " << endl;
	return 0;
}
string GetLatterString(string a, string b)
{
	if (a[0] > b[0]) return a;
	else return b;
}

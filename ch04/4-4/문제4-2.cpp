// *******************************************
// 제목: 영문자와 공백만 추출하여 새string객체 생성
// 날짜: 26년 4월 13일
// 작성자: 명승연
// *******************************************
#include <iostream>
#include <string>
using namespace std;
int main(void)
{
	string a;
	string b = "";
	cout << "텍스트 입력(한글 안 됨)";
	getline(cin, a);
	for (int i = 0; i < a.length(); i++)
	{
		if (isalpha(a[i]) || a[i] == ' ') b += a[i];
	}
	cout << b;
	return 0;
}

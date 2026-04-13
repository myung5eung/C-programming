// *******************************************
// 제목: string이용해서 문자열처리
// 날짜: 26년 4월 13일
// 작성자: 명승연
// *******************************************
#include <iostream>
#include <string>
using namespace std;
int main(void)
{
	string a;
	int c = 0;
	cout << "문자열 입력: ";
	getline(cin, a);
	for (int i = 0; i < a.length(); i++)
	{
		if (a[i] == 'a') c++;
	}
	cout << "문자a는" << c << "개 있습니다.";
	return 0;
}

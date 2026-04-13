// *******************************************
// 제목: string이용해서 문자열 처리
// 날짜: 26년 4월 13일
// 작성자: 명승연
// *******************************************
#include <iostream>
#include <string>
using namespace std;
int  main(void)
{
	string a;
	string result = "";
	int i = 1;
	while (1)
	{
		cout << "문자열입력: ";
		getline(cin, a);
		if (a == "quit") break;
		cout << "이어진 문자열: ";
		result += "<" + to_string(i) + ">" + a;
		cout << result << endl;
		i++;

	}
	return 0;
}

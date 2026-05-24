// *******************************************
// 제목: 사전상 제일 뒤에나오는 문자열
// 날짜: 26년 5월 25일
// 작성자: 명승연
// *******************************************
#include <iostream>
#include <string>
using namespace std;
string bigname(string names[]);
int  main(void)
{
	string names[5];
	for (int i = 0; i < 5; i++) {
		cout << "이름 >> ";
		getline(cin, names[i], '\n');
	}
	string res = bigname(names);
	cout << "사전에서 가장 뒤에 나오는 문자열은 " << res << endl;
	return 0;
}
	
string bigname(string names[])
{
	string max = names[0];
	for (int i = 1; i < 5; i++)
	{
		if (max < names[i]) max = names[i];
	}
	return max;
}

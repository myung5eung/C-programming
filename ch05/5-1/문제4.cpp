// *******************************************
// 제목: 주소에 의한 호출(스왑)
// 날짜: 26년 5월 25일
// 작성자: 명승연
// *******************************************
#include <iostream>
#include <string>
using namespace std;
void SwapString(string* a, string* b);
int  main(void)
{
	string s1("hello");
	string s2("world");
	cout << "호출전 s1: " << s1 << " s2: " << s2 << endl;
	SwapString(&s1, &s2); // 함수 호출
	cout << "호출후 s1: " << s1 << " s2: " << s2 << endl;
	return 0;
}
	
void SwapString(string* a, string* b)
{
	string temp = *a;
	*a = *b;
	*b = temp;
}

// *******************************************
// 제목: 문자열 입력 동적할당
// 날짜: 26년 4월 6일
// 작성자: 명승연
// *******************************************
#include <iostream>
using namespace std;
int main(void)
{
	int n;
	cout << "저장할 문자열의 크기를 입력하세요: ";
	cin >> n;
	char* p = new char[n+1]; //널문자 저장 공간 추가
	if (!p) { cout << "no"; return -1; }
	cout << "문자열을 입력하시오: ";
	cin.ignore();
	cin.getline(p, n + 1);
	cout << "입력한 문자열은 " << p << "입니다. ";
	delete[]p;
	return 0;
}


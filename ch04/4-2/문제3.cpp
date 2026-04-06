// *******************************************
// 제목: 정수입력 동적할당
// 날짜: 26년 4월 6일
// 작성자: 명승연
// *******************************************
#include <iostream>
using namespace std;
int main(void)
{
	int n, total=0;
	cout << "입력할 정수의 개수를 입력하세요: ";
	cin >> n;
	int* p = new int[n];
	if (!p) { cout << "no"; return -1; }
	cout <<n<< "개의 정수를 입력 하시오.\n";
	for (int i = 0; i < n; i++)
	{
		cin >> p[i]; total += p[i];
	}
	cout << "평균값은 " << total / n << "입니다. ";
	delete[]p;
	return 0;
}


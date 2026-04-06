// *******************************************
// 제목: 실수배열 동적할당
// 날짜: 26년 4월 6일
// 작성자: 명승연
// *******************************************
#include <iostream>
using namespace std;
int main(void)
{
	int n;
	cout << "입력할 실수의 개수를 입력하세요: ";
	cin >> n;
	double* p = new double[n];
	if (!p) { cout << "no"; return -1; }
	double max = p[0];
	cout <<n<< "개의 실수를 입력 하시오.\n";
	for (int i = 0; i < n; i++)
	{
		cin >> p[i];
		if (max < p[i]) max = p[i];
	}
	cout << "최대값은" << max << "입니다.";
	delete[]p;
	return 0;
}


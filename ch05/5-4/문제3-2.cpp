// *******************************************
// 제목: 교재문제 2
// 날짜: 26년 5월 25일
// 작성자: 명승연
// *******************************************
#include <iostream>
#include <string>
using namespace std;
bool compare(int a, int b, int& min, int& max);
int main(void)
{
	int a, b, min, max;
	cout << "두 수 입력>> ";
	cin >> a >> b;
	bool res = compare(a, b, min, max);
	if (res == true) cout << "두 수는 같습니다. ";
	else cout << "작은 수는" << min << " 큰 수는" << max;
	return 0;
}
bool compare(int a, int b, int& min, int& max) {
	if (a == b) return true;
	
	if (a >= b) { max = a; min = b; }
	else { max = b; min = a; }
	return false;
}

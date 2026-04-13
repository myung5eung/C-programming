// *******************************************
// 제목: 구 객체배열 동적할당
// 날짜: 26년 4월 8일
// 작성자: 명승연
// *******************************************
#include <iostream>
#include <string>
using namespace std;
class Spthere {
private:
	int radius;
public:
	Spthere() {}
	Spthere(int r) :radius(r){}
	~Spthere(){}
	void setRadius(int r) { radius = r; }
	double getVolume() { return radius * radius * 3.14; }
};
int main()
{
	int n, r;
	cout << "생성하고자 하는 구의 개수: ";
	cin >> n;
	Spthere* tri = new Spthere[n];
	for (int i = 0; i < 3; i++)
	{
		cout << "구" << i + 1 << "의 반지름: ";
		cin >> r;
		tri[i].setRadius(r);
	}
	for (int i = 0; i < 3; i++)
	{
		cout << "구"<<i+1<<"의 부피 " << tri[i].getVolume() << "\n";
	}
	delete[]tri;
	return 0;
}

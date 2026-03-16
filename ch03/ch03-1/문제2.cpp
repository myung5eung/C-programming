# Title : 삼각형의 면적 구하기
# Author : myungseungyeon
# Data : 26.3.16

#include <iostream>
using namespace std;
class Triangle {
public:
	int wid;
	int hei;
	double getArea();
};
double Triangle::getArea()
{
	return (wid * hei) * 0.5;
}
int main(void)
{
	Triangle t;
	t.wid = 3;
	t.hei = 5;
	cout << "삼각형의 면적은" << t.getArea();
	return 0;
}

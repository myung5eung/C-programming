// *******************************************
// 제목: 구 클래스 소멸자 전역함수 
// 날짜: 26년 3월 24일
// 작성자: 명승연
// *******************************************
#include <iostream>

using namespace std;

class Sphere {
public:
	int rad;
	Sphere();
	Sphere(int a);
	~Sphere();
	double getVolume();
};
Sphere::Sphere() :Sphere(1) {}
Sphere::Sphere(int a) : rad(a)
{ cout << "반지름" << rad << "인 구 생성\n";}
Sphere::~Sphere() 
{ cout << "반지름" << rad << "인 구 소멸\n";}
double Sphere::getVolume()
{ return (4.0 / 3.0) * 3.141592 * rad * rad * rad;}

Sphere sph1(10);
Sphere sph2(20);

int main() {
	cout << "구의부피는" << sph1.getVolume() << endl;
	cout << "구의부피는" << sph2.getVolume() << endl;
	return 0;
}

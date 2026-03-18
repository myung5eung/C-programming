// *******************************************
// 제목: 구 클래스 위임,타켓생성자 활용
// 날짜: 26년 3월 18일
// 작성자: 명승연
// *******************************************

#include <iostream>
using namespace std;
class Sphere {
	int rad;
public:
	Sphere();
	Sphere(int a);
	double getVolume() { return (4.0 / 3.0) * 3.14 * rad * rad * rad; };
};
Sphere::Sphere() :Sphere(1) {}
Sphere::Sphere(int a) : rad(a) {}

int main() {
	Sphere sph1; // 반지름=1로초기화
	cout << "구의부피는" << sph1.getVolume() << endl;
	Sphere sph2(3); // 반지름=3로초기화
	cout << "구의부피는" << sph2.getVolume() << endl;
	return 0;
}

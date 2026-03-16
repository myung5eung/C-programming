# Title : 구의 부피, 표면적 구하기 
# Author : myungseungyeon
# Data : 26.3.16

#include <iostream>
using namespace std;
class Sphere {
public:
	int rad;
	double getVolume();
	double getArea();
};
double Sphere::getVolume()
{
	return  (4.0 / 3.0) * 3.14 * rad * rad * rad;
}
double Sphere::getArea() {
	return 4 * 3.14 * rad * rad;
}
int main(void)
{
	Sphere c;
	c.rad = 3;
	cout << "구의 부피는 " << c.getVolume() << "\n";
	cout << "구의 표면적은 " << c.getArea() << "\n";
	
	return 0;
}

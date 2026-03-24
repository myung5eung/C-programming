// *******************************************
// 제목: 삼각형 클래스 소멸자 전역객체
// 날짜: 26년 3월 24일
// 작성자: 명승연
// *******************************************
#include <iostream>
using namespace std;
class Triangle
{
public:
	int width, height;
	Triangle();
	Triangle(int w, int h);
	~Triangle();
	double getArea();
}; 
Triangle::Triangle() : Triangle(1, 1){}
Triangle::Triangle(int w, int h) : width(w), height(h) 
{ cout << "밑변" << width << "높이" << height << "인 삼각형 생성\n"; }
Triangle::~Triangle()
{ cout << "밑변" << width << "높이" << height << "인 삼각형 소멸\n";}
double Triangle::getArea()
{
	return (1.0 / 2.0) * width * height;
}

Triangle tri1(4, 8);
Triangle tri2(2, 2);
int main() {
	cout << "삼각형의 면적은 "<< tri1.getArea() << endl;
	cout <<  "삼각형의 면적은 " << tri2.getArea() << endl;
		return 0;
}

// *******************************************
// 제목: 삼각형 클래스 소멸자
// 날짜: 26년 3월 24일
// 작성자: 명승연
// *******************************************
#include <iostream>
using namespace std;
class Triangle
{
	int width, height;
public:
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
int main() {
	Triangle tri1; //밑변,높이 1로 초기화
	cout << "삼각형의 면적은 "<< tri1.getArea() << endl;
		Triangle tri2(2, 4); //밑변=2,높이=4로 초기화
	cout <<  "삼각형의 면적은 " << tri2.getArea() << endl;
		return 0;
}

// *******************************************
// 제목: 삼각형 클래스 프라이빗지정
// 날짜: 26년 3월 26일
// 작성자: 명승연
// *******************************************
#include <iostream>
using namespace std;
class Triangle {
	int width;
	int height;
public:
	Triangle();
	~Triangle();
	void setWidth(int w);
	void setHeight(int h);
	int getWidth();
	int getHeight();
	double getArea();
};
Triangle::Triangle(): width(1),height(1) 
{ cout << "폭" << width << ",높이" << height << "삼각형생성\n"; }
Triangle::~Triangle() 
{ cout << "폭" <<width<<",높이" <<height<< " 삼각형소멸"; }
void Triangle::setWidth(int w) { width = w; }
void Triangle::setHeight(int h) { height = h; }
int Triangle::getWidth(){ return width; }
int Triangle::getHeight() { return height; }
double Triangle::getArea() { return width*height*0.5; }
int main() {
	Triangle tri;
	tri.setWidth(3);
	tri.setHeight(5);
	cout << "삼각형의 폭은 "<< tri.getWidth() << endl;
	cout << "삼각형의 높이는 "<< tri.getHeight() << endl;
	cout << "삼각형의 높이는 "<< tri.getArea() << endl;
	return 0;
}

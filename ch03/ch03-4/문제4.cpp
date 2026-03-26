// *******************************************
// 제목: 삼각형 클래스 프라이빗지정2
// 날짜: 26년 3월 26일
// 작성자: 명승연
// *******************************************
#include <iostream>
using namespace std;
class Triangle {
	int width;
	int height;
public:
	Triangle(int w, int h);
	~Triangle();
	void setWidth(int w);
	void setHeight(int h);
	int getWidth();
	int getHeight();
	double getArea();
};
Triangle::Triangle(int w,int h): width(w),height(h) 
{ 
	if (w < 0 || h < 0) { 
		cout << "길이는 양수여야함, 대신에";
		width = 1, height = 1;
	}
	cout << "폭" << width << ",높이" << height << "삼각형생성\n"; }
Triangle::~Triangle() 
{ cout << "폭" <<width<<",높이" <<height<< " 삼각형소멸"; }
void Triangle::setWidth(int w) { 
	if (w < 0) cout << "폭은 양수이어야 함\n";
	else width = w; 
}
void Triangle::setHeight(int h) {
	if (h < 0) cout << "높이는 양수이어야 함\n";
	else height = h;
}
int Triangle::getWidth(){ return width; }
int Triangle::getHeight() { return height; }
double Triangle::getArea() { return width*height*0.5; }
int main() {
	Triangle tri(-10, -5);
	tri.setWidth(-3);
	tri.setHeight(-5);
	tri.setWidth(3);
	tri.setHeight(5);
	cout << "삼각형의 폭은 "<< tri.getWidth() << endl;
	cout << "삼각형의 높이는 "<< tri.getHeight() << endl;
	return 0;

}

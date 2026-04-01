// *******************************************
// 제목: This포인터 사용
// 날짜: 26년 4월 1일
// 작성자: 명승연
// *******************************************
#include <iostream>
using namespace std;
class Triangle {
private:
	int width, height;
public:
	Triangle() :width(1), height(1) { }
	Triangle(int w) :width(w), height(1) {}
	Triangle(int w, int h) :width(w), height(h) {}
	~Triangle() {}
	void setWidth(int width) { this->width = width; }
	void setHeight(int height) { this->height = height; }
	double getArea() { return width * height * 0.5; }
};
int main()
{
	Triangle tri1; 
	cout << "삼각형의 면적은 "<< tri1.getArea() << endl;
	Triangle tri2(10); 
	cout << "삼각형의 면적은 " << tri2.getArea() << endl;
	Triangle tri3(10, 2);
	cout << "삼각형의 면적은  "<< tri3.getArea() << endl;
	return 0;
}

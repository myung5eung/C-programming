// *******************************************
// 제목: 객체포인터 이용하여 호출
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
	~Triangle() {}
	void setWidth(int width) { this->width = width; }
	void setHeight(int height) { this->height = height; }
	double getArea() { return width * height * 0.5; }
};
int main()
{
	Triangle tri1; 
	Triangle* ptr = &tri1;
	ptr->setWidth(3);
	ptr->setHeight(5);
	cout << "삼각형의 면적은 "<< ptr->getArea() << endl;
	return 0;
}

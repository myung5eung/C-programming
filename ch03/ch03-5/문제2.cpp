// *******************************************
// 제목: 인라인함수 사용
// 날짜: 26년 4월 1일
// 작성자: 명승연
// *******************************************
#include <iostream>
using namespace std;

class Triangle {
private:
	int width, height;
public:
	Triangle() :width(1), height(1) { cout << "폭" << width << ", 높이" << height << "삼각형 생성\n"; }
	~Triangle() { cout << "폭" << width << ", 높이" << height << "삼각형 소멸\n"; }
	void setWidth(int w) { width = w; }
	void setHeight(int h) { height = h; }
	double getArea() { return width * height * 0.5; }
};
int main()
{
	Triangle tri;
	tri.setWidth(3);
	tri.setHeight(5);
	cout << "삼각형의 면적은 " << tri.getArea() << endl;
	return 0;

}

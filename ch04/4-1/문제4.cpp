// *******************************************
// 제목: 객체 배열 사용
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
	Triangle(int w, int h) :width(w), height(h) { cout << "폭" << width << ", 높이" << height << "삼각형 생성\n"; }
	~Triangle() { cout << "폭" << width << ", 높이" << height << "삼각형 소멸\n"; }
	double getArea() { return width * height * 0.5; }
};
int main()
{
	Triangle tri[3] = { Triangle(2,2), Triangle(4,4) ,Triangle(6,6) };
	for (int i = 0; i < 3; i++)
	{
		cout << "삼각형" << i << "의 면적은 " << tri[i].getArea() << endl;
	}
	return 0;

}

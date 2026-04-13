// *******************************************
// 제목: 객체 배열 동적할당 
// 날짜: 26년 4월 8일
// 작성자: 명승연
// *******************************************
#include <iostream>
#include <string>
using namespace std;
class Triangle {
private:
	int width, height;
public:
	Triangle() :width(1), height(1) { cout << "밑변 " << width << "높이 " << height << "인 삼각형 생성" << "\n"; }
	Triangle(int w, int h) :width(w), height(h) { cout << "밑변 " << width << "높이 " << height << "인 삼각형 생성" << "\n"; }
	~Triangle(){ cout << "밑변 " << width << "높이 " << height << "인 삼각형 소멸" << "\n"; }

	double getArea() { return width * height * 0.5; }
};
int main()
{
	Triangle* tri = new Triangle[3]{ Triangle(), Triangle(2,2), Triangle(4,4) };
	for (int i = 0; i < 3; i++)
	{
		cout << "삼각형의 면적은" << tri[i].getArea() << "\n";
	}
	delete[]tri;
	return 0;
}

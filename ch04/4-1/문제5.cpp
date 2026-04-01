// *******************************************
// 제목: 객체 포인터 이용 여러가지 방법
// 날짜: 26년 4월 1일
// 작성자: 명승연
// *******************************************
#include <iostream>
using namespace std;

class Triangle {
private:
	int width, height;
public:
	Triangle(int w, int h) :width(w), height(h) { }
	~Triangle() {}
	double getArea() { return width * height * 0.5; }
};
int main()
{
	Triangle tri[3] = { Triangle(2,2), Triangle(4,4) ,Triangle(6,6) };
	Triangle* ptr = tri;
	for (int i = 0; i < 3; i++) 
	{
		cout << "삼각형" << i << "의 면적은 " << (ptr+i)->getArea() << endl;
	}
	for (int i=0; i<3; i++)
	{
		    cout << "삼각형" << i << "의 면적은 " << (tri+i)->getArea() << endl;
	}
	for (int i = 0; i < 3; i++)
	{
		cout << "삼각형" << i << "의 면적은 " << ptr->getArea() << endl;
		ptr++;
	}
	return 0;

}

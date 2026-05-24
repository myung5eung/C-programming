// *******************************************
// 제목: 교재문제 3
// 날짜: 26년 5월 25일
// 작성자: 명승연
// *******************************************
#include <iostream>
#include <string>
using namespace std;
class Bubble {
	int radius;
public:
	Bubble(int radius) { this->radius = radius; }
	int getRadius() { return radius; }
	void setRadius(int n) { radius = n; }
};
void addBubble(Bubble& a, Bubble b, Bubble c);
int main()
{
	Bubble a(5), b(10), c(130);
	addBubble(c, a, b);
	cout << "버블 c의 반지름 " << c.getRadius() << endl;
	return 0;
}
void addBubble(Bubble& a, Bubble b, Bubble c)
{ 
	int sum = a.getRadius()+b.getRadius() + c.getRadius();
	a.setRadius(sum);
}

// *******************************************
// 제목: 삼각형 클래스 위임,타켓생성자 활용
// 날짜: 26년 3월 18일
// 작성자: 명승연
// *******************************************

#include <iostream>
using namespace std;
class Triangle {
    int w, h;
public:
    Triangle();
    Triangle(int a, int b);
    double getArea() { return (1.0 / 2.0) * w * h; }
};
Triangle::Triangle() :Triangle(1, 1) {}
Triangle::Triangle(int a, int b) : w(a), h(b) {}

int main(void)
{
    Triangle tri1; // 밑변,높이1로초기화
    cout << "삼각형의면적은" << tri1.getArea() << endl;
    Triangle tri2(2, 4); // 밑변=2,높이=4로초기화
    cout << "삼각형의면적은" << tri2.getArea() << endl;
}

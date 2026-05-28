// *******************************************
// 제목: 실수부와 허수부를 멤버변수로 갖는 복소수클래스작성
// 날짜: 26년 5월 28일
// 작성자: 명승연
// *******************************************
#include <iostream>
using namespace std;
class Complex;
class ComplexManager;

class Complex
{
	int real, img;
public:
	Complex():Complex(0,0){}
	Complex(int real, int img);
	void show();
	friend ComplexManager; 
};
Complex::Complex(int real, int img) {
	this->real = real; this->img = img;
	cout << "북소수 " << real << "+" << img << "j 생성" << endl;
}
void Complex::show() {
	cout << "두 북소수의 합은" << real << "+" << img << "j" << endl;
}
class ComplexManager
{
public:
	Complex ComplexAdd(Complex a, Complex b);
};
Complex ComplexManager::ComplexAdd(Complex a, Complex b) {
	Complex sum;
	sum.real= a.real + b.real;
	sum.img = a.img + b.img;
	return sum;
}

int main() {
	Complex x(2, 3), y(-5, 10), sum;
	ComplexManager man;
	sum = man.ComplexAdd(x, y);
	cout << "두 복소수의 합은";
	sum.show();

}

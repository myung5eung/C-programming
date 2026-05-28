// *******************************************
// 제목: 실수부와 허수부를 멤버변수로 갖는 복소수클래스작성
// 날짜: 26년 5월 28일
// 작성자: 명승연
// *******************************************
#include <iostream>
using namespace std;
class Complex;
Complex ComplexAdd(Complex a, Complex b);
class Complex
{
	int real, img;
public:
	Complex():Complex(0,0){}
	Complex(int real, int img);
	void show();
	friend Complex ComplexAdd(Complex a, Complex b);
};
Complex::Complex(int real, int img) { 
	this->real = real; this->img = img; 
	cout << "북소수 " << real << "+" << img << "j 생성" << endl;
}
Complex ComplexAdd(Complex a, Complex b){
	Complex sum;
	sum.real= a.real + b.real;
	sum.img = a.img + b.img;
	return sum;
}
void Complex::show(){
	cout << "두 북소수의 합은" << real << "+" << img << "j" << endl;
}
int main() {
	Complex x(2, 3), y(-5, 10), sum;
	sum = ComplexAdd(x, y);
	cout << "두 북소수의 합은 ";
	sum.show();
}

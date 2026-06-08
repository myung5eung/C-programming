// *******************************************
// 제목: 전위 후위 연산자함수 작성
// 날짜: 26년 6월 09일
// 작성자: 명승연
// *******************************************
#include <iostream>
using namespace std;
class Complex {
	int real, img;
public:
	Complex(int real, int img) {
		this->real = real; this->img = img;
		cout << "복소수" << real << img << "생성" << endl;
	}
	void show(){
		if (img >= 0)
			cout << real << "+" << img << "j" << endl;
		else
			cout << real << img << "j" << endl;
	}
	Complex& operator++();
	Complex operator--(int n);
};
Complex& Complex::operator++() {
	this->real++;
	this->img++;
	return *this;
}
Complex Complex::operator--(int n) {
	Complex tmp = *this;
	this->real--;
	this->img--;
	return tmp;
}
int main() {
	Complex x(2, -3);
	++x;
	cout << "증가결과";
	x.show();
	x--;
	cout << "감소결과";
	x.show();
	return 0;
}

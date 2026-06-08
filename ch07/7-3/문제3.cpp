// *******************************************
// 제목: 정수+객체를 위해 프렌드로 작성
// 날짜: 26년 6월 09일
// 작성자: 명승연
// *******************************************
#include <iostream>
using namespace std;
class Power {
	int kick;
	int punch;
public:
	Power(int kick = 0, int punch = 0) {
		this->kick = kick; this->punch = punch;
	}
	void show();
	friend Power operator*(int op1, Power op2); 
};
void Power::show() {
	cout << "kick=" << kick << ',' << "punch=" << punch << endl;
}
Power operator*(int op1, Power op2) {
	Power tmp; 
	tmp.kick = op1 * op2.kick;
	tmp.punch = op1 * op2.punch;
	return tmp;
}

int main() {
	Power a(3, 5), b;
	a.show();
	b.show();
	b = 2 * a; 
	a.show();
	b.show();
	return 0;
}

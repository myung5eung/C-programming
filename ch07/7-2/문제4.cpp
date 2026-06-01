class complex {
	int x, y;
public:
	complex(int x = 0, int y = 0);
	complex operator-(int a);
	void show();
};
complex::complex(int x, int y) { this->x = x; this->y = y; }
complex complex::operator-(int a) {
	complex temp;
	temp.x = this->x-a;
	temp.y= this->y-a;
	return temp;
}
void complex::show() {
	cout << x << "+" << y << "j" << endl;
}
int main(void) {
	complex a(3, 5), b;
	a.show();
	b.show();
	b = a - 2; // 복소수 객체와 정수 빼기
	a.show();
	b.show();
	return 0;
}

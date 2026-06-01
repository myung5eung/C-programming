class Complex {
	int x, y;
public:
	Complex(int x = 0, int y = 0);
	Complex operator*(Complex op2);
	void show();
};
Complex::Complex(int x, int y) { this->x = x; this->y = y; }
Complex Complex::operator*(Complex op2) {
	Complex temp;
	temp.x = (this->x * op2.x) - (this->y * op2.y);
	temp.y = (this->x * op2.y) + (this->y*op2.x);
	return temp;
}
void Complex::show() {
	cout << x << "+" << y << "j" << endl;
}
int main(void) {
	Complex x(2, 3), y(-5, 10), sum;
	sum = x * y;
	cout << "두 복소수의 곱은";
	sum.show();
	return 0;
}

class Complex {
	int x, y;
public:
	Complex(int x = 0, int y = 0);
	Complex& operator+=(Complex op2);
	void show();
};
Complex::Complex(int x, int y) { this->x = x; this->y = y; }
Complex& Complex::operator+=(Complex op2) {
	this->x += op2.x;
	this->y += op2.y;
	return *this;
}
void Complex::show() {
	if(this->y<0) cout << x << y << "j" << endl;
	cout << x << "+" << y << "j" << endl;
}
int main(void) {
	Complex a(3, 5), b(1, 1);
	a.show();
	b.show();
	b += a;
	a.show();
	b.show();
	return 0;
}

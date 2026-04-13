#include <iostream>
#include <string>
using namespace std;
class Container {
	int* p;
	int size;
public:
	Container(int size);
	~Container();
	void read();
	void write();
	void rotate();
	double avg();
};
Container::Container(int size){
	this->size = size;
	p = new int[size];
}
Container::~Container() { delete[] p; }
void Container::read() { 
	cout << "정수" << size << "개 입력>>";
	for (int i = 0; i < size; i++) cin >> p[i];
}
void Container::write() { for (int i = 0; i < size; i++) cout << p[i] << ' ';  cout << "\n"; }
void Container::rotate() {
	int f = p[size-1];
	for (int i = size-1; i > 0; i--)
		p[i] = p[i-1];
	p[0] = f;
}
double Container::avg(){
	double t = 0;
	for (int i = 0; i < size; i++) t += p[i];
	return t / size;
}
int main(void)
{
	Container c(10);
	c.read();
	c.write();
	c.rotate();
	c.write();
	cout << "평균은" << c.avg() << endl;
}

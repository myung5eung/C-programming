#include <iostream>
#include <string>
using namespace std;
class Book {
	string title;
	int price;
public:
	Book() { title = ""; price = 0; }
	void set(string title, int price) { this->title = title; this->price = price; }
	string getTitle() { return title; }
	int getPrice() { return price; }
};

class Library {
	string name;
	Book* p;
	int size;
	int next = 0;
public:
	Library(string name, int size);
	~Library();
	void add(string name, int price);
	void show();
	Book* mostExpensive();
};
Library::Library(string name, int size)
{
	this->name = name; this->size = size;
	p = new Book[size];
	if (!p) cout << "no";
}
Library::~Library() { delete []p; }
void Library::add(string name, int price){
	p[next].set(name, price);
	next++;
}
void Library::show(){
	for (int i = 0; i < next; i++)
	{
		cout << "[" + p[i].getTitle() + "]" << "   ";
	}
	cout << "\n";
}
Book* Library::mostExpensive(){
	if (next==0) return nullptr;
	Book* exp = &p[0]; 
	for (int i = 1; i < size; i++)
	{
		if (exp->getPrice() < p[i].getPrice()) exp = &p[i];
	}
	return exp;
}
int main(void)
{
	Library* lib = new Library("한국도서관", 10);
	lib->add("명품 c++", 30000);
	lib->add("라즈베리파이", 34000);
	lib->add("HTML5", 33000);
	lib->show();
	Book* b = lib->mostExpensive();
	cout << "가장 비싼 책: " << b->getTitle() << "," << b->getPrice() << endl;
	delete lib;
	return 0;
}


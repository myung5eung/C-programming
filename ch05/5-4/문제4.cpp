// *******************************************
// 제목: 교재문제 11
// 날짜: 26년 5월 25일
// 작성자: 명승연
// *******************************************
#include <iostream>
#include <string>
using namespace std;
class Mystack
{
    int* p;
    int size = 0;
    int tos = 0;
public:
    Mystack();
    Mystack(int size);
    Mystack(const Mystack& src);
    ~Mystack();
    bool push(int n);
    bool pop(int& n);
};
Mystack::Mystack():p(nullptr){}
Mystack::Mystack(int size) { 
    this->size = size; 
    this->p = new int[size];
}
Mystack::Mystack(const Mystack& src){
    this->size = src.size;
    this->p = new int[src.size];
    for (int i = 0; i < tos; i++) {
        p[i] = src.p[i];
    }
}
Mystack::~Mystack() { delete[]p; }
bool Mystack::push(int n){
    if (tos >= size) return false;
    p[tos++] = n;
    return true;
}
bool Mystack::pop(int& n){
    if (tos ==0 ) return false;
    n = p[--tos];
    return true;
}

int main() {
    Mystack a(10);
    a.push(10); a.push(20);
    Mystack b = a;
    b.push(30);
    int n;
    a.pop(n);
    cout << "스택 a에서 팝한 값 " << n << endl;
    b.pop(n);
    cout << "스택 b에서 팝한 값 " << n << endl;
    return 0;
}

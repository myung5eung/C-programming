// *******************************************
// 제목: string클래스를 이용하여 간단한 코드로 변경
// 날짜: 26년 5월 25일
// 작성자: 명승연
// *******************************************
#include <iostream>
#include <string>
using namespace std;
class Person{ // Person 클래스선언
	string name;
	int id;
public:
	Person(int id, string name) { this->id = id; this->name = name; } // 생성자
	void changeName(string name) { this->name = name; }
	void show() { cout << id << ',' << name << endl; }
};

int main() {
	Person father(1, "Kitae"); // father 객체생성자호출
	Person daughter(father); // daughter 객체의복사생성자호출
	cout << "daughter 객체생성직후----" << endl;
	father.show(); // father 객체출력
	daughter.show(); // daughter 객체출력
	daughter.changeName("Grace"); // daughter의이름을"Grace"로변경
	cout << "daughter 이름을Grace로변경한후----" << endl;
	father.show(); // father 객체출력
	daughter.show(); // daughter 객체출력
	return 0; // daughter, father 객체소멸
}

# 실습과제 1
### 지금까지 배운 내용 기준으로 컴파일러가 자동으로 추가하는 멤버함수는 어떤 것이 있는가? 4가지
지금까지 배운 내용 기준으로 컴파일러가 자동으로 추가하는 멤버함수는 디폴트 생성자, 디폴트 소멸자, 디폴트 대입 연산자 함수, 디폴트 복사 생성자이다.
### 대입연산과 얕은 복사생성자의 차이는 무엇인가?
둘 다 객체의 멤버를 복사하지만 대입연산은 이미 존재하는 객체에 값을 복사하는 것이고, 얕은 복사생성자는 새 객체를 만들면서 기존 객체의 값으로 초기화하는 것이라는 차이가 있다.
# 실습과제 2
```cpp
#include <iostream>
#include <string>
```
- 문자열 처리와 입출력을 위해 iostream, string 헤더파일 포함

```cpp
using namespace std;
```
- std이름공간에 선언된 모든 이름에 std:: 생략

```cpp
class Person{ // Person 클래스선언
```
- Person 클래스 시작

```cpp
	string name;
	int id;
```
- 이름을 저장할 문자열 변수 name 선언
- id를 저장할 정수 변수 id 선언

```cpp
public:
```
- 외부에서 접근 가능한 public 영역 시작

```cpp
	Person(int id, string name) { this->id = id; this->name = name; } // 생성자
```
- 생성자를 통해 id와 name을 초기화
- this를 사용해서 현재 객체의 멤버 변수에 값 저장

```cpp
	void changeName(string name) { this->name = name; }
```
- 전달받은 name으로 현재 객체의 이름 변경

```cpp
	void show() { cout << id << ',' << name << endl; }
```
- 객체의 id와 name 출력

```cpp
};
```
- Person 클래스 종료

```cpp
int main() {
```
- 메인함수 시작

```cpp
	Person father(1, "Kitae"); // father 객체생성자호출
```
- id가 1이고 이름이 Kitae인 father 객체 생성

```cpp
	Person daughter(father); // daughter 객체의복사생성자호출
```
- father 객체를 복사하여 daughter 객체 생성

```cpp
	cout << "daughter 객체생성직후----" << endl;
```
- daughter 객체 생성 직후 안내문 출력

```cpp
	father.show(); // father 객체출력
```
- father 객체 출력

```cpp
	daughter.show(); // daughter 객체출력
```
- daughter 객체 출력

```cpp
	daughter.changeName("Grace"); // daughter의이름을"Grace"로변경
```
- daughter 객체의 이름을 Grace로 변경

```cpp
	cout << "daughter 이름을Grace로변경한후----" << endl;
```
- daughter 이름 변경 후 안내문 출력

```cpp
	father.show(); // father 객체출력
```
- father 객체 출력

```cpp
	daughter.show(); // daughter 객체출력
```
- daughter 객체 출력

```cpp
	return 0; // daughter, father 객체소멸
}
```
- 0을 반환하고 프로그램 종료
- 프로그램 종료 시 daughter, father 객체 소멸
## 실행결과

# 실습과제 3
```cpp
#include <iostream>
#include <string>
```
- 문자열 처리와 입출력을 위해 iostream, string 헤더파일 포함

```cpp
using namespace std;
```
- std이름공간에 선언된 모든 이름에 std:: 생략

```cpp
void twice(int& n);
```
- 정수 값을 참조로 받아 2배로 증가시키는 함수 원형 선언

```cpp
int main(void)
{
```
- 메인함수 시작

```cpp
	int n = 12;
```
- 정수 변수 n을 선언하고 12로 초기화

```cpp
	twice(n);
```
- twice 함수에 n을 전달하여 함수 호출

```cpp
	cout << n;
```
- 2배로 증가한 n 값 출력

```cpp
}
```
- 메인함수 종료

```cpp
void twice(int& n)
{
```
- 정수 값을 참조로 받아 2배로 증가시키는 twice 함수 시작

```cpp
	n *= 2;
```
- n 값을 2배로 증가시킴

```cpp
}
```
- 함수 종료
## 실행결과1
```cpp
#include <iostream>
#include <string>
```
- 문자열 처리와 입출력을 위해 iostream, string 헤더파일 포함

```cpp
using namespace std;
```
- std이름공간에 선언된 모든 이름에 std:: 생략

```cpp
bool compare(int a, int b, int& min, int& max);
```
- 정수 두 개를 받아 같은지 비교하고, 작은 수와 큰 수를 참조로 저장하는 함수 원형 선언

```cpp
int main(void)
{
```
- 메인함수 시작

```cpp
	int a, b, min, max;
```
- 입력받을 정수 변수 a, b 선언
- 작은 수와 큰 수를 저장할 변수 min, max 선언

```cpp
	cout << "두 수 입력>> ";
	cin >> a >> b;
```
- 사용자에게 두 수 입력받음

```cpp
	bool res = compare(a, b, min, max);
```
- compare 함수에 a, b, min, max를 전달하고 반환값을 res에 저장

```cpp
	if (res == true) cout << "두 수는 같습니다. ";
```
- res가 true이면 두 수가 같다는 문장 출력

```cpp
	else cout << "작은 수는" << min << " 큰 수는" << max;
```
- 그렇지 않으면 작은 수와 큰 수 출력

```cpp
	return 0;
}
```
- 0을 반환하고 프로그램 종료

```cpp
bool compare(int a, int b, int& min, int& max) {
```
- 두 수를 비교하는 compare 함수 시작

```cpp
	if (a == b) return true;
```
- a와 b가 같으면 true 반환

```cpp
	if (a >= b) { max = a; min = b; }
```
- a가 b보다 크거나 같으면 max에 a 저장, min에 b 저장

```cpp
	else { max = b; min = a; }
```
- 그렇지 않으면 max에 b 저장, min에 a 저장

```cpp
	return false;
```
- 두 수가 같지 않으면 false 반환

```cpp
}
```
- 함수 종료
## 실행결과2
```cpp
#include <iostream>
#include <string>
```
- 문자열 처리와 입출력을 위해 iostream, string 헤더파일 포함

```cpp
using namespace std;
```
- std이름공간에 선언된 모든 이름에 std:: 생략

```cpp
class Bubble {
```
- Bubble 클래스 시작

```cpp
	int radius;
```
- 버블의 반지름을 저장할 변수 radius 선언

```cpp
public:
```
- 외부에서 접근 가능한 public 영역 시작

```cpp
	Bubble(int radius) { this->radius = radius; }
```
- 생성자를 통해 radius를 초기화
- this를 사용해서 현재 객체의 멤버 변수에 값 저장

```cpp
	int getRadius() { return radius; }
```
- radius 값을 반환하는 getRadius 함수 정의

```cpp
	void setRadius(int n) { radius = n; }
```
- 전달받은 n 값을 radius에 저장하는 setRadius 함수 정의

```cpp
};
```
- Bubble 클래스 종료

```cpp
void addBubble(Bubble& a, Bubble b, Bubble c);
```
- Bubble 객체 3개를 받아 반지름을 더하는 함수 원형 선언
- 첫 번째 객체는 참조로 전달받음

```cpp
int main()
{
```
- 메인함수 시작

```cpp
	Bubble a(5), b(10), c(130);
```
- 반지름이 5인 Bubble 객체 a 생성
- 반지름이 10인 Bubble 객체 b 생성
- 반지름이 130인 Bubble 객체 c 생성

```cpp
	addBubble(c, a, b);
```
- addBubble 함수에 c, a, b를 전달하여 함수 호출

```cpp
	cout << "버블 c의 반지름 " << c.getRadius() << endl;
```
- 버블 c의 반지름 출력

```cpp
	return 0;
}
```
- 0을 반환하고 프로그램 종료

```cpp
void addBubble(Bubble& a, Bubble b, Bubble c)
{ 
```
- Bubble 객체 3개의 반지름을 더하는 addBubble 함수 시작

```cpp
	int sum = a.getRadius()+b.getRadius() + c.getRadius();
```
- a, b, c의 반지름을 모두 더해서 sum에 저장

```cpp
	a.setRadius(sum);
```
- 더한 값을 a의 radius에 저장

```cpp
}
```
- 함수 종료
## 실행결과3

# 실습과제 4
```cpp
#include <iostream>
#include <string>
```
- 문자열 처리와 입출력을 위해 iostream, string 헤더파일 포함

```cpp
using namespace std;
```
- std이름공간에 선언된 모든 이름에 std:: 생략

```cpp
class Mystack
{
```
- Mystack 클래스 시작

```cpp
    int* p;
    int size = 0;
    int tos = 0;
```
- 스택 배열을 가리킬 포인터 p 선언
- 스택의 크기를 저장할 변수 size 선언 및 0으로 초기화
- 스택의 top 위치를 저장할 변수 tos 선언 및 0으로 초기화

```cpp
public:
```
- 외부에서 접근 가능한 public 영역 시작

```cpp
    Mystack();
    Mystack(int size);
    Mystack(const Mystack& src);
    ~Mystack();
```
- 기본 생성자 선언
- 크기를 전달받는 생성자 선언
- 복사 생성자 선언
- 소멸자 선언

```cpp
    bool push(int n);
    bool pop(int& n);
```
- 스택에 값을 넣는 push 함수 선언
- 스택에서 값을 꺼내는 pop 함수 선언

```cpp
};
```
- Mystack 클래스 종료

```cpp
Mystack::Mystack():p(nullptr){}
```
- 기본 생성자에서 p를 nullptr로 초기화

```cpp
Mystack::Mystack(int size) { 
```
- 크기를 전달받는 생성자 시작

```cpp
    this->size = size; 
```
- this를 사용해서 현재 객체의 size에 전달받은 size 저장

```cpp
    this->p = new int[size];
```
- size 크기만큼 동적 배열 생성하여 p에 저장

```cpp
}
```
- 생성자 종료

```cpp
Mystack::Mystack(const Mystack& src){
```
- src 객체를 복사하는 복사 생성자 시작

```cpp
    this->size = src.size;
```
- src의 size 값을 현재 객체의 size에 저장

```cpp
    this->p = new int[src.size];
```
- src의 size 크기만큼 동적 배열 생성하여 p에 저장

```cpp
    for (int i = 0; i < tos; i++) {
```
- 스택에 저장된 값들을 복사하기 위한 반복문 실행

```cpp
        p[i] = src.p[i];
```
- src의 p 배열 값을 현재 객체의 p 배열에 복사

```cpp
    }
```
- 반복문 종료

```cpp
}
```
- 복사 생성자 종료

```cpp
Mystack::~Mystack() { delete[]p; }
```
- 소멸자에서 동적 배열 p 메모리 해제

```cpp
bool Mystack::push(int n){
```
- 스택에 값을 넣는 push 함수 시작

```cpp
    if (tos >= size) return false;
```
- 스택이 가득 차 있으면 false 반환

```cpp
    p[tos++] = n;
```
- p[tos] 위치에 n을 저장하고 tos 값 1 증가

```cpp
    return true;
```
- 값 저장에 성공하면 true 반환

```cpp
}
```
- 함수 종료

```cpp
bool Mystack::pop(int& n){
```
- 스택에서 값을 꺼내는 pop 함수 시작

```cpp
    if (tos ==0 ) return false;
```
- 스택이 비어 있으면 false 반환

```cpp
    n = p[--tos];
```
- tos 값을 1 감소시킨 후 해당 위치의 값을 n에 저장

```cpp
    return true;
```
- 값 꺼내기에 성공하면 true 반환

```cpp
}
```
- 함수 종료

```cpp
int main() {
```
- 메인함수 시작

```cpp
    Mystack a(10);
```
- 크기가 10인 Mystack 객체 a 생성

```cpp
    a.push(10); a.push(20);
```
- 스택 a에 10과 20 저장

```cpp
    Mystack b = a;
```
- a 객체를 복사하여 b 객체 생성

```cpp
    b.push(30);
```
- 스택 b에 30 저장

```cpp
    int n;
```
- pop으로 꺼낸 값을 저장할 정수 변수 n 선언

```cpp
    a.pop(n);
```
- 스택 a에서 값을 꺼내 n에 저장

```cpp
    cout << "스택 a에서 팝한 값 " << n << endl;
```
- 스택 a에서 팝한 값 출력

```cpp
    b.pop(n);
```
- 스택 b에서 값을 꺼내 n에 저장

```cpp
    cout << "스택 b에서 팝한 값 " << n << endl;
```
- 스택 b에서 팝한 값 출력

```cpp
    return 0;
}
```
- 0을 반환하고 프로그램 종료
## 실행결과

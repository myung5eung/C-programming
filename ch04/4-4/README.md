# 실습과제 1
### string 객체는 문자열 입력 받을 때 몇 자를 입력할지 물어 보지않고 알아서 크기를 자동 조절한다. 동작 원리를 검색해보고 설명하라 
string 객체는 동적 메모리 할당되어 문자 데이터를 저장하기 위해 힙영역에 메모리를 할당하고 입력되는 문자열의 길이에 따라 필요한 만큼 메모리를 조절한다. 
### 문자열을 입력할 때 마지막에 입력하는 엔터키와 getline 함수의 마지막 인자에 전달하는 구분문자와 차이를 설명하라 
엔터키는 입력 버퍼에 '\n' 형태로 남아 운영체제 수준에서 입력을 종료시키는 역할이고 getline함수의 구분문자는 입력 스트림에서 특정 문자를 만날 때까지 데이터를 읽는다. 해당 문자를 만나면 입력을 종료하며 버퍼에서 제거되며 문자열에 저장되지 않는다. 
# 실습과제 2
```
#include <iostream>
#include <string>
```
- 문자열 처리와 입출력을 위해 iostream, string 헤더파일 포함
```
using namespace std;
```
- std이름공간에 선언된 모든 이름에 std:: 생략
```
int  main(void)
{
```
- 메인함수 시작
```
	string a;
	string result = "";
	int i = 1;
```
- 입력받을 문자열 a 선언
- 결과를 누적할 문자열 result 초기화
- 문자열 번호를 붙이기 위한 변수 i 선언 및 1로 초기화
```
	while (1)
	{
```
- 무한 반복문 실행
```
		cout << "문자열입력: ";
		getline(cin, a);
```
- 사용자에게 문자열 입력받고 공백 포함 입력을 위해 getline 사용
```
		if (a == "quit") break;
```
- 입력값이 "quit"이면 반복문 종료
```
		cout << "이어진 문자열: ";
```
- 이어진 문자열 출력 안내문 출력
```
		result += "<" + to_string(i) + ">" + a;
```
- result에 문자열 더해서 저장
- to_string 사용해서 문자열로 바꿈
```
		cout << result << endl;
```
- 현재까지 이어진 전체 문자열 출력
```
		i++;
```
- 다음 입력을 위해 번호 1 증가
```
	}
```
- 반복문 종료
```
	return 0;
}
```
- 0을 반환하고 프로그램 종료

## 실행결과 
<img width="730" height="312" alt="image" src="https://github.com/user-attachments/assets/8896be60-046d-4b16-bd32-458ca33d4898" />

# 실습과제 3
```
#include <iostream>
#include <string>
```
- 문자열 처리와 입출력을 위해 iostream, string 헤더파일 포함

```
using namespace std;
```
- std이름공간에 선언된 모든 이름에 std:: 생략

```
int main(void)
{
```
- 메인함수 시작

```
	string a;
	int c = 0;
```
- 입력받을 문자열 a 선언  
- 문자 개수를 저장할 변수 c를 0으로 선언 및 초기화

```
	cout << "문자열 입력: ";
	getline(cin, a);
```
- 사용자에게 문자열 입력받고 공백 포함 입력을 위해 getline 사용  

```
	for (int i = 0; i < a.length(); i++)
	{
```
- 문자열 길이만큼 반복하는 for문 실행  

```
		if (a[i] == 'a') c++;
```
- 문자열의 각 문자 확인해서 'a'이면 c를 1 증가  

```
	}
```
- 반복문 종료  

```
	cout << "문자a는" << c << "개 있습니다.";
```
- 입력한 문자열 안에 있는 문자 'a'의 총 개수 출력  

```
	return 0;
}
```
- 0을반환하고 함수종료
## 실행결과
<img width="855" height="191" alt="image" src="https://github.com/user-attachments/assets/367421cb-a921-4ed6-b72f-f842213b0ea2" />

# 실습과제 4
2,4,5,8,9,11 중에 4문제 
## 연습문제 2번
```
#include <iostream>
#include <string>
```
- 입출력을 위한 iostream과 문자열 처리를 위한 string 헤더파일 포함

```
using namespace std;
```
- std이름공간에 선언된 모든 이름에 std:: 생략

```
int main(void)
{
```
- 메인함수 시작

```
	int num;
```
- 구입할 물품 개수를 저장할 변수 num 선언

```
	cout << "구입할 물품의 개수>>";
	cin >> num;
```
- 사용자로부터 물품 개수 입력받음

```
	int* price = new int[num];
```
- 입력받은 개수만큼 동적 배열 생성하여 가격 저장할 공간 할당

```
	if (!price) { cout << "no"; return -1; }
```
- 메모리 할당 실패 시 "no" 출력하고 프로그램 종료

```
	cout << "물품" << num << "개의 가격입력>>";
```
- 가격 입력 안내문 출력

```
	cin >> price[0]; 
```
- 첫 번째 가격 입력받음

```
	int max = price[0], min = price[0];
```
- 최대값과 최소값을 첫 번째 가격으로 초기화

```
	for (int i = 1; i < num; i++) {
```
- 두 번째 값부터 끝까지 반복하는 for문 실행

```
		cin >> price[i];
```
- 각 물품의 가격 입력받음

```
		if (max < price[i]) max = price[i];
```
- 현재 값이 max보다 크면 max 갱신

```
		if (min > price[i]) min = price[i];
```
- 현재 값이 min보다 작으면 min 갱신

```
	}
```
- 반복문 종료

```
	cout << "제일 싼 가격은 " << min<<"\n";
```
- 최솟값 출력

```
	cout << "제일 비싼 가격은 " << max;
```
- 최댓값 출력

```
	delete[]price;
```
- 동적으로 할당한 배열 메모리 해제

```
	return 0;
}
```
- 0을 반환하고 함수 종료
<img width="845" height="236" alt="image" src="https://github.com/user-attachments/assets/35331614-6aaf-4427-af78-49264f69672c" />

## 연습문제 4번
```
#include <iostream>
#include <string>
```
- 입출력을 위한 iostream과 문자열 처리를 위한 string 헤더파일 포함

```
using namespace std;
```
- std이름공간에 선언된 모든 이름에 std:: 생략

```
int main(void)
{
```
- 메인함수 시작

```
	string a;
	string b = "";
```
- 입력받을 문자열 a 선언  
- 알파벳&공백만 저장할 문자열 b를 선언 및 초기화 

```
	cout << "텍스트 입력(한글 안 됨)";
	getline(cin, a);
```
- 사용자에게 문자열 입력받고 공백 포함 입력을 위해 getline 사용  

```
	for (int i = 0; i < a.length(); i++)
	{
```
- 문자열 길이만큼 반복하는 for문 실행  

```
		if (isalpha(a[i]) || a[i] == ' ') b += a[i];
```
- 각 문자가 알파벳이거나 공백이면 b에 추가  

```
	}
```
- 반복문 종료  

```
	cout << b;
```
- 조건에 맞는 문자들만 저장된 결과 문자열 출력  

```
	return 0;
}
```
- 0을 반환하고 함수 종료
<img width="846" height="232" alt="image" src="https://github.com/user-attachments/assets/a7dee6c3-4d83-4621-9f72-28a9a1067120" />

## 연습문제 5번
```
#include <iostream>
#include <string>
```
- cin, cout 등 라이브러리 객체의 선언을 포함하고 있는 헤더파일 iostream과 string을 포함

```
using namespace std;
```
- std이름공간에 선언된 모든 이름에 std:: 생략

```
class Container {
```
- 클래스 Container 선언

```
private:
	int* p;
	int size;
```
- 접근 지정자가 private인 정수 배열을 가리키는 포인터 p와 크기 size 멤버변수 선언

```
public:
	Container(int size);
```
- 배열 크기를 전달받는 생성자 선언

```
	~Container();
```
- 소멸자 선언

```
	void read();
	void write();
	void rotate();
	double avg();
```
- 정수 입력, 출력, 회전, 평균을 구하는 멤버함수 선언

```
};
```
- 클래스 선언부 닫음

```
Container::Container(int size){
	this->size = size;
	p = new int[size];
}
```
- 생성자 정의
- 전달받은 size를 멤버변수에 저장하고 동적 배열 생성

```
Container::~Container()
{
	delete[] p;
}
```
- 소멸자 구현
- 동적으로 할당한 배열 메모리 해제

```
void Container::read() {
	cout << "정수" << size << "개 입력>>";
	for (int i = 0; i < size; i++) cin >> p[i];
}
```
- size만큼 정수를 입력받아 배열 p에 저장하는 함수

```
void Container::write() {
	for (int i = 0; i < size; i++) cout << p[i] << ' ';
	cout << "\n";
}
```
- 배열의 모든 요소를 출력하는 함수

```
void Container::rotate() {
	int f = p[size-1];
	for (int i = size-1; i > 0; i--)
		p[i] = p[i-1];
	p[0] = f;
}
```
- 배열의 마지막 값을 저장한 뒤
- 모든 값을 한 칸씩 뒤로 이동시키고 마지막 값을 맨 앞에 배치하는 함수

```
double Container::avg() {
	double t = 0;
	for (int i = 0; i < size; i++) t += p[i];
	return t / size;
}
```
- 배열 요소의 합을 구한 뒤 size로 나누어 평균을 반환하는 함수

```
int main(void)
{
```
- 메인함수 시작

```
	Container c(10);
```
- 크기가 10인 Container 객체 생성

```
	c.read();
```
- 사용자로부터 정수 입력받음

```
	c.write();
```
- 현재 배열 상태 출력

```
	c.rotate();
```
- 배열을 한 칸 회전

```
	c.write();
```
- 회전된 배열 출력

```
	cout << "평균은" << c.avg() << endl;
```
- 배열의 평균값 출력

```
	return 0;
}
```
- 0을 반환하고 함수 종료
<img width="977" height="312" alt="image" src="https://github.com/user-attachments/assets/ad2de49c-ac49-46f8-9c81-e2ee9fcae07a" />

## 연습문제 9번
```
#include <iostream>
#include <string>
```
- cin, cout 등 라이브러리 객체의 선언을 포함하고 있는 헤더파일 iostream과 string을 포함

```
using namespace std;
```
- std이름공간에 선언된 모든 이름에 std:: 생략

```
class Book {
	string title;
	int price;
```
- 클래스 Book 선언
- 제목과 가격을 저장할 멤버변수 title, price 선언

```
public:
	Book() { title = ""; price = 0; }
	void set(string title, int price) { this->title = title; this->price = price; }
	string getTitle() { return title; }
	int getPrice() { return price; }
};
```
- 접근 지정자가 public
- 기본생성자에서 제목은 빈 문자열, 가격은 0으로 초기화
- 제목과 가격을 저장하는 set함수 선언하면서 인라인으로 정의
- 제목을 반환하는 getTitle함수, 가격을 반환하는 getPrice함수 선언하면서 인라인으로 정의 후 클래스 선언부 닫음

```
class Library {
	string name;
	Book* p;
	int size;
	int next = 0;
```
- 클래스 Library 선언
- 도서관 이름을 저장할 name, Book 객체배열을 가리키는 포인터 p, 배열 크기 size, 다음 저장 위치를 나타내는 next 멤버변수 선언

```
public:
	Library(string name, int size);
	~Library();
	void add(string name, int price);
	void show();
	Book* mostExpensive();
};
```
- 접근 지정자가 public
- 생성자, 소멸자와 책 추가, 출력, 가장 비싼 책을 찾는 멤버함수 선언 후 클래스 선언부 닫음

```
Library::Library(string name, int size)
{
	this->name = name; this->size = size;
	p = new Book[size];
	if (!p) cout << "no";
}
```
- 생성자 정의
- 전달받은 name과 size를 멤버변수에 저장하고 Book 객체 배열을 동적으로 생성
- 메모리 할당 실패 시 no 출력

```
Library::~Library() { delete []p; }
```
- 소멸자 구현
- 동적으로 할당한 Book 배열 메모리 해제

```
void Library::add(string name, int price){
	p[next].set(name, price);
	next++;
}
```
- 책 제목과 가격을 전달받아 현재 위치의 Book 객체에 저장
- 다음 저장 위치를 1 증가

```
void Library::show(){
	for (int i = 0; i < next; i++)
	{
		cout << "[" + p[i].getTitle() + "]" << "   ";
	}
	cout << "\n";
}
```
- 현재 저장된 책들의 제목을 반복문으로 출력하는 함수
- 책 제목은 대괄호로 묶어서 출력하고 마지막에 줄바꿈

```
Book* Library::mostExpensive(){
	if (next==0) return nullptr;
	Book* exp = &p[0]; 
	for (int i = 1; i < size; i++)
	{
		if (exp->getPrice() < p[i].getPrice()) exp = &p[i];
	}
	return exp;
}
```
- 가장 비싼 책을 찾는 함수
- 저장된 책이 없으면 nullptr 반환
- 첫 번째 책 주소를 exp에 저장한 뒤 반복문으로 더 비싼 책이 있으면 exp를 그 책 주소로 변경
- 가장 비싼 책의 주소를 반환

```
int main(void)
{
```
- 메인함수 시작

```
	Library* lib = new Library("한국도서관", 10);
```
- Library 객체를 동적으로 생성하고 그 주소를 lib 포인터에 저장

```
	lib->add("명품 c++", 30000);
	lib->add("라즈베리파이", 34000);
	lib->add("HTML5", 33000);
```
- 도서관에 책 제목과 가격 정보 추가

```
	lib->show();
```
- 저장된 책 제목들 출력

```
	Book* b = lib->mostExpensive();
```
- 가장 비싼 책의 주소를 반환받아 Book 포인터 b에 저장

```
	cout << "가장 비싼 책: " << b->getTitle() << "," << b->getPrice() << endl;
```
- 가장 비싼 책의 제목과 가격 출력

```
	delete lib;
```
- 동적으로 생성한 Library 객체 메모리 해제

```
	return 0;
}
```
- 0을 반환하고 함수 종료
<img width="667" height="275" alt="image" src="https://github.com/user-attachments/assets/8625555b-18a6-4d39-a449-cd5af81c0337" />

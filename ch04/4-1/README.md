# 실습과제 1
### 배열명의 의미를 설명하라.
배열 첫번째 요소의 주소

### 객체 포인터의 의미를 설명하라
객체의 주소를 저장하는 변수 

### 포인터를 이용하여 배열 각 원소의 주소를 구하는 방법을 설명하라

### 포인터를 이용하여 배열 각 원소의 값을 구하는 방법을 설명하라

# 실습과제 2
```
#include <iostream>
```
- cin, cout, 등 라이브러리 객체의 선언을 포함하고 있는 헤더파일 iostream을 포함
```
using namespace std;
```
- std이름공간에선언된모든이름에std::생략
```
class Triangle {
private:
	int width, height;
```
- 클래스 Triangle 선언하고 접근 지정자가 private인 밑변과 높이 멤버변수 선언
```
public:
	Triangle() :width(1), height(1) { }
	~Triangle() {}
```
- 접근 지정자가 public으로 생성자와 소멸자 선언
```
void setWidth(int width) { this->width = width; }
void setHeight(int height) { this->height = height; }
double getArea() { return width * height * 0.5; }
};
```
- 밑변과 높이를 설정하는 함수, 면적을 반환하는 함수 선언하면서 인라인으로 정의 후 클래스 선언부 닫음
- 매개변수가 멤버변수와 이름이 같으므로 this포인터 사용
```
int main()
{
	Triangle tri1;
```
- 메인함수 시작, 객체 tri1생성
```
Triangle* ptr = &tri1;
	ptr->setWidth(3);
	ptr->setHeight(5);
	cout << "삼각형의 면적은 "<< ptr->getArea() << endl;
```
- 객체포인터를 선언후 초기화, 객체 포인터 표현으로 밑변과 높이 설정
- 포인터 표현으로 면적 출력
```
return 0;
}
```
- 0을 반환하고 함수종료

## 실행결과
<img width="759" height="241" alt="image" src="https://github.com/user-attachments/assets/3b319377-fb96-4458-bdb5-07c6e1e19ad5" />

# 실습과제 3
```
#include <iostream>
```
- cin, cout, 등 라이브러리 객체의 선언을 포함하고 있는 헤더파일 iostream을 포함

```
using namespace std;
```
- std이름공간에 선언된 모든 이름에 std:: 생략

```
class Triangle {
private:
	int width, height;
```
- 클래스 Triangle 선언하고 접근 지정자가 private인 밑변과 높이 멤버변수 선언

```
public:
	Triangle() :width(1), height(1) { }
	Triangle(int w) :width(w), height(1) {}
	Triangle(int w, int h) :width(w), height(h) {}
	~Triangle() {}
```
- 접근 지정자가 public으로 기본 생성자, 매개변수 수에 따른 생성자, 소멸자 선언

```
void setWidth(int width) { this->width = width; }
void setHeight(int height) { this->height = height; }
double getArea() { return width * height * 0.5; }
};
```
- 밑변과 높이를 설정하는 함수, 면적을 반환하는 함수 선언하면서 인라인으로 정의 후 클래스 선언부 닫음
- 매개변수가 멤버변수와 이름이 같으므로 this포인터 사용

```
int main()
{
	Triangle tri1;
	cout << "삼각형의 면적은 "<< tri1.getArea() << endl;
```
- 메인함수 시작, 기본 생성자 객체 tri1 생성하고 면적 출력

```
Triangle tri2(10);
cout << "삼각형의 면적은 " << tri2.getArea() << endl;
```
- 매개변수 1개 생성자를 이용하여 객체 tri2 생성하고 면적출력
```
Triangle tri3(10, 2);
cout << "삼각형의 면적은  "<< tri3.getArea() << endl;
```
- 매개변수 2개 생성자를 이용하여 객체 tri3 생성하고 면적출력
```
return 0;
}
```
- 0을 반환하고 함수종료
## 실행결과
<img width="753" height="215" alt="image" src="https://github.com/user-attachments/assets/411aa307-45b1-4ca6-9804-fc2b2264cd2d" />

# 실습과제 4
```
#include <iostream>
```
- cin, cout, 등 라이브러리 객체의 선언을 포함하고 있는 헤더파일 iostream을 포함

```
using namespace std;
```
- std이름공간에 선언된 모든 이름에 std:: 생략

```
class Triangle {
private:
	int width, height;
```
- 클래스 Triangle 선언하고 접근 지정자가 private인 밑변과 높이 멤버변수 선언

```
public:
	Triangle() :width(1), height(1) { cout << "폭" << width << ", 높이" << height << "삼각형 생성\n"; }
	Triangle(int w, int h) :width(w), height(h) { cout << "폭" << width << ", 높이" << height << "삼각형 생성\n"; }
	~Triangle() { cout << "폭" << width << ", 높이" << height << "삼각형 소멸\n"; }
```
- 접근 지정자가 public으로 기본 생성자, 매개변수 수에 따른 생성자, 소멸자 선언
- 생성자, 소멸자 호출 시 문구 출력

```
double getArea() { return width * height * 0.5; }
};
```
- 삼각형의 면적을 반환하는 함수 선언하면서 인라인으로 정의 후 클래스 선언부 닫음

```
int main()
{
	Triangle tri[3] = { Triangle(2,2), Triangle(4,4) ,Triangle(6,6) };
```
- 메인함수 시작
- Triangle 객체 3개를 가지는 배열 선언과 동시에 각각 초기화

```
for (int i = 0; i < 3; i++)
{
```
- 배열요소 순환용 반복문

```
cout << "삼각형" << i << "의 면적은 " << tri[i].getArea() << endl;
```
- 각 면적을 출력

```
}
return 0;
};
```
- 0을 반환하고 메인함수 종료
## 실행결과
<img width="750" height="347" alt="image" src="https://github.com/user-attachments/assets/1e0af541-8478-49aa-b268-4ab3e3a17c7c" />

# 실습과제 5
```
#include <iostream>
```
- cin, cout, 등 라이브러리 객체의 선언을 포함하고 있는 헤더파일 iostream을 포함

```
using namespace std;
```
- std이름공간에 선언된 모든 이름에 std:: 생략

```
class Triangle {
private:
	int width, height;
```
- 클래스 Triangle 선언하고 접근 지정자가 private인 밑변과 높이 멤버변수 선언

```
public:
	Triangle(int w, int h) :width(w), height(h) { }
	~Triangle() {}
```
- 접근 지정자가 public으로 매개변수 2개 생성자와 소멸자 선언

```
double getArea() { return width * height * 0.5; }
};
```
- 삼각형의 면적을 반환하는 함수 선언하면서 인라인으로 정의 후 클래스 선언부 닫음

```
int main()
{
	Triangle tri[3] = { Triangle(2,2), Triangle(4,4) ,Triangle(6,6) };
```
- 메인함수 시작
- Triangle 객체 3개를 가지는 배열 선언과 동시에 각각 초기화

```
Triangle* ptr = tri;
```
- 배열명(첫번째 요소의 주소)를 가리키도록 객체 포인터 선언 및 초기화

```
for (int i = 0; i < 3; i++) 
{
	cout << "삼각형" << i << "의 면적은 " << (ptr+i)->getArea() << endl;
}
```
- 포인터 연산을 이용하여 각 객체에 접근 후 면적 출력 후 반복문 종료
```
for (int i=0; i<3; i++)
{
	cout << "삼각형" << i << "의 면적은 " << (tri+i)->getArea() << endl;
}
```
- 배열명을 사용하는 방식으로 각 객체에 접근 후 면적 출력 후 반복문 종료

```
for (int i = 0; i < 3; i++)
{
	cout << "삼각형" << i << "의 면적은 " << ptr->getArea() << endl;
	ptr++;
}
```
- 포인터가 가리키는 객체의 면적 출력 후 다음 요소로 이동하는 증감연산 사용

```
}
return 0;
}
```
- 0을 반환하고 메인함수 종료

## 실행결과
<img width="670" height="316" alt="image" src="https://github.com/user-attachments/assets/71c45131-1432-48aa-ac8d-a0ee18e2dc7c" />

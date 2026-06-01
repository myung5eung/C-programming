# 실습과제 1
```cpp
#include <iostream>
```
- 입출력을 위해 iostream 헤더파일 포함

```cpp
using namespace std;
```
- std이름공간에 선언된 모든 이름에 std:: 생략
```cpp
class Complex {
```
- Complex 클래스 시작

```cpp
	int x, y;
```
- 실수부를 저장할 변수 x 선언
- 허수부를 저장할 변수 y 선언

```cpp
public:
```
- 외부에서 접근 가능한 public 영역 시작

```cpp
	Complex(int x = 0, int y = 0);
```
- x와 y 값을 전달받는 생성자 선언
- 값을 안 넣으면 기본값 0으로 설정

```cpp
	Complex operator+(Complex op2);
```
- + 연산자를 중복하는 함수 선언
- Complex 객체끼리 더할 수 있게 함

```cpp
	void show();
```
- 복소수 값을 출력하는 show 함수 선언

```cpp
};
```
- Complex 클래스 종료

```cpp
Complex::Complex(int x, int y) { this->x = x; this->y = y; }
```
- 전달받은 x와 y 값을 현재 객체의 멤버 변수에 저장

```cpp
Complex Complex::operator+(Complex op2){
```
- Complex 클래스의 + 연산자 중복 함수 시작

```cpp
	Complex temp;
```
- 더한 결과를 저장할 Complex 객체 temp 생성

```cpp
	temp.x = this->x + op2.x;
```
- 현재 객체의 x와 op2 객체의 x를 더해서 temp.x에 저장

```cpp
	temp.y = this->y + op2.y;
```
- 현재 객체의 y와 op2 객체의 y를 더해서 temp.y에 저장

```cpp
	return temp;
```
- 더한 결과인 temp 반환

```cpp
}
```
- + 연산자 중복 함수 종료

```cpp
void Complex::show(){
```
- Complex 클래스의 show 함수 정의 시작

```cpp
	if(this->y<0) cout << x << y << "j" << endl;
```
- y 값이 음수이면 + 없이 복소수 출력

```cpp
	else cout << x << "+" << y << "j" << endl;
```
- y 값이 0 이상이면 + 기호를 붙여서 복소수 출력

```cpp
}
```
- show 함수 종료

```cpp
int main(void) {
```
- 메인함수 시작

```cpp
	Complex x(2, 3), y(-5, -10), sum;
```
- x 객체는 2+3j로 생성
- y 객체는 -5-10j로 생성
- sum 객체는 기본값 0+0j로 생성

```cpp
	sum = x + y;
```
- x와 y를 + 연산자로 더한 결과를 sum에 저장

```cpp
	cout << "두 복소수의 합은";
```
- 결과 출력 전 안내문 출력

```cpp
	sum.show();
```
- sum 객체의 복소수 값 출력

```cpp
	return 0;
```
- 0을 반환하고 프로그램 종료

```cpp
}
```
- 메인함수 종료
## 실행결과
<img width="627" height="215" alt="image" src="https://github.com/user-attachments/assets/5edaf3d3-9160-47a9-adfb-e9f7251f5250" />
# 실습과제2
```cpp
#include <iostream>
```
- 입출력을 위해 iostream 헤더파일 포함

```cpp
using namespace std;
```
- std이름공간에 선언된 모든 이름에 std:: 생략

```cpp
class Complex {
```
- Complex 클래스 시작

```cpp
	int x, y;
```
- 실수부를 저장할 변수 x 선언
- 허수부를 저장할 변수 y 선언

```cpp
public:
```
- 외부에서 접근 가능한 public 영역 시작

```cpp
	Complex(int x = 0, int y = 0);
```
- x와 y 값을 전달받는 생성자 선언
- 값을 안 넣으면 기본값 0으로 설정

```cpp
	Complex operator*(Complex op2);
```
- 연산자를 중복하는 함수 선언
- Complex 객체끼리 곱할 수 있게 함

```cpp
	void show();
```
- 복소수 값을 출력하는 show 함수 선언

```cpp
};
```
- Complex 클래스 종료

```cpp
Complex::Complex(int x, int y) { this->x = x; this->y = y; }
```
- 전달받은 x와 y 값을 현재 객체의 멤버 변수에 저장

```cpp
Complex Complex::operator*(Complex op2) {
```
- Complex 클래스의 * 연산자 중복 함수 시작

```cpp
	Complex temp;
```
- 곱한 결과를 저장할 Complex 객체 temp 생성

```cpp
	temp.x = (this->x * op2.x) - (this->y * op2.y);
```
- 복소수 곱셈 공식에 따라 실수부 계산해서 temp.x에 저장

```cpp
	temp.y = (this->x * op2.y) + (this->y*op2.x);
```
- 복소수 곱셈 공식에 따라 허수부 계산해서 temp.y에 저장

```cpp
	return temp;
```
- 곱한 결과인 temp 반환

```cpp
}
```
- 연산자 중복 함수 종료

```cpp
void Complex::show() {
```
- Complex 클래스의 show 함수 정의 시작

```cpp
	if(this->y<0) cout << x << y << "j" << endl;
```
- y 값이 음수이면 + 없이 복소수 출력

```cpp
	cout << x << "+" << y << "j" << endl;
```
- 복소수의 실수부와 허수부 출력

```cpp
}
```
- show 함수 종료

```cpp
int main(void) {
```
- 메인함수 시작

```cpp
	Complex x(2, 3), y(-5, 10), sum;
```
- x 객체는 2+3j로 생성
- y 객체는 -5+10j로 생성
- sum 객체는 기본값 0+0j로 생성

```cpp
	sum = x * y;
```
- x와 y를 * 연산자로 곱한 결과를 sum에 저장

```cpp
	cout << "두 복소수의 곱은";
```
- 결과 출력 전 안내문 출력

```cpp
	sum.show();
```
- sum 객체의 복소수 값 출력

```cpp
	return 0;
```
- 0을 반환하고 프로그램 종료

```cpp
}
```
- 메인함수 종료
## 실행결과
<img width="582" height="291" alt="image" src="https://github.com/user-attachments/assets/ffdeff49-b9ef-42f6-9e8e-39b46bf24790" />
# 실습과제3
```cpp
#include <iostream>
```
- 입출력을 위해 iostream 헤더파일 포함

```cpp
using namespace std;
```
- std이름공간에 선언된 모든 이름에 std:: 생략

```cpp
class Complex {
```
- Complex 클래스 시작

```cpp
	int x, y;
```
- 실수부를 저장할 변수 x 선언
- 허수부를 저장할 변수 y 선언

```cpp
public:
```
- 외부에서 접근 가능한 public 영역 시작

```cpp
	Complex(int x = 0, int y = 0);
```
- x와 y 값을 전달받는 생성자 선언
- 값을 안 넣으면 기본값 0으로 설정

```cpp
	Complex& operator+=(Complex op2);
```
- += 연산자를 중복하는 함수 선언
- Complex 객체끼리 더한 값을 현재 객체에 저장할 수 있게 함

```cpp
	void show();
```
- 복소수 값을 출력하는 show 함수 선언

```cpp
};
```
- Complex 클래스 종료

```cpp
Complex::Complex(int x, int y) { this->x = x; this->y = y; }
```
- 전달받은 x와 y 값을 현재 객체의 멤버 변수에 저장

```cpp
Complex& Complex::operator+=(Complex op2) {
```
- Complex 클래스의 += 연산자 중복 함수 시작

```cpp
	this->x += op2.x;
```
- 현재 객체의 x 값에 op2 객체의 x 값을 더해서 저장

```cpp
	this->y += op2.y;
```
- 현재 객체의 y 값에 op2 객체의 y 값을 더해서 저장

```cpp
	return *this;
```
- 현재 객체 자신을 반환

```cpp
}
```
- += 연산자 중복 함수 종료

```cpp
void Complex::show() {
```
- Complex 클래스의 show 함수 정의 시작

```cpp
	if(this->y<0) cout << x << y << "j" << endl;
```
- y 값이 음수이면 + 없이 복소수 출력

```cpp
	cout << x << "+" << y << "j" << endl;
```
- 복소수의 실수부와 허수부 출력

```cpp
}
```
- show 함수 종료

```cpp
int main(void) {
```
- 메인함수 시작

```cpp
	Complex a(3, 5), b(1, 1);
```
- a 객체는 3+5j로 생성
- b 객체는 1+1j로 생성

```cpp
	a.show();
```
- a 객체의 복소수 값 출력

```cpp
	b.show();
```
- b 객체의 복소수 값 출력

```cpp
	b += a;
```
- b 객체에 a 객체 값을 더해서 b에 저장

```cpp
	a.show();
```
- a 객체의 복소수 값 출력

```cpp
	b.show();
```
- b 객체의 복소수 값 출력

```cpp
	return 0;
```
- 0을 반환하고 프로그램 종료

```cpp
}
```
- 메인함수 종료
## 실행결과
<img width="572" height="305" alt="image" src="https://github.com/user-attachments/assets/6ac50e62-b980-40ce-b11d-fa8bec0ea675" />
# 실습과제 4

## 실행결과


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
	int real, img;
```
- 실수부를 저장할 변수 real 선언
- 허수부를 저장할 변수 img 선언

```cpp
public:
```
- 외부에서 접근 가능한 public 영역 시작

```cpp
	Complex(int real, int img) {
```
- real과 img 값을 전달받는 생성자 시작

```cpp
		this->real = real; this->img = img;
```
- 전달받은 real과 img 값을 현재 객체의 멤버 변수에 저장

```cpp
		cout << "복소수" << real << img << "생성" << endl;
```
- 복소수 생성 문장 출력

```cpp
	}
```
- 생성자 종료

```cpp
	void show(){
```
- 복소수 값을 출력하는 show 함수 시작

```cpp
		if (img >= 0)
```
- img 값이 0 이상인지 확인

```cpp
			cout << real << "+" << img << "j" << endl;
```
- img 값이 0 이상이면 + 기호를 붙여서 복소수 출력

```cpp
		else
```
- img 값이 0보다 작을 때 실행

```cpp
			cout << real << img << "j" << endl;
```
- img 값이 음수이면 + 없이 복소수 출력

```cpp
	}
```
- show 함수 종료

```cpp
	Complex& operator++();
```
- 전위 ++ 연산자를 중복하는 함수 선언
- Complex 객체의 real과 img 값을 증가시킬 수 있게 함

```cpp
	Complex operator--(int n);
```
- 후위 -- 연산자를 중복하는 함수 선언
- Complex 객체의 real과 img 값을 감소시킬 수 있게 함

```cpp
};
```
- Complex 클래스 종료

```cpp
Complex& Complex::operator++() {
```
- Complex 클래스의 전위 ++ 연산자 중복 함수 시작

```cpp
	this->real++;
```
- 현재 객체의 real 값을 1 증가

```cpp
	this->img++;
```
- 현재 객체의 img 값을 1 증가

```cpp
	return *this;
```
- 현재 객체 자신을 반환

```cpp
}
```
- 전위 ++ 연산자 중복 함수 종료

```cpp
Complex Complex::operator--(int n) {
```
- Complex 클래스의 후위 -- 연산자 중복 함수 시작

```cpp
	Complex tmp = *this;
```
- 감소하기 전 현재 객체 값을 tmp에 저장

```cpp
	this->real--;
```
- 현재 객체의 real 값을 1 감소

```cpp
	this->img--;
```
- 현재 객체의 img 값을 1 감소

```cpp
	return tmp;
```
- 감소하기 전 값인 tmp 반환

```cpp
}
```
- 후위 -- 연산자 중복 함수 종료

```cpp
int main() {
```
- 메인함수 시작

```cpp
	Complex x(2, -3);
```
- x 객체를 2-3j로 생성

```cpp
	++x;
```
- 전위 ++ 연산자로 x 객체의 real과 img 값을 1씩 증가

```cpp
	cout << "증가결과";
```
- 증가결과 안내문 출력

```cpp
	x.show();
```
- x 객체의 복소수 값 출력

```cpp
	x--;
```
- 후위 -- 연산자로 x 객체의 real과 img 값을 1씩 감소

```cpp
	cout << "감소결과";
```
- 감소결과 안내문 출력

```cpp
	x.show();
```
- x 객체의 복소수 값 출력

```cpp
	return 0;
```
- 0을 반환하고 프로그램 종료

```cpp
}
```
- 메인함수 종료
## 실행결과

# 실습과제 2
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
	int real, img;
```
- 실수부를 저장할 변수 real 선언
- 허수부를 저장할 변수 img 선언

```cpp
public:
```
- 외부에서 접근 가능한 public 영역 시작

```cpp
	Complex(int real, int img) {
```
- real과 img 값을 전달받는 생성자 시작

```cpp
		this->real = real; this->img = img;
```
- 전달받은 real과 img 값을 현재 객체의 멤버 변수에 저장

```cpp
		cout << "복소수" << real << img << "생성" << endl;
```
- 복소수 생성 문장 출력

```cpp
	}
```
- 생성자 종료

```cpp
	void show(){
```
- 복소수 값을 출력하는 show 함수 시작

```cpp
		if (img >= 0)
```
- img 값이 0 이상인지 확인

```cpp
			cout << real << "+" << img << "j" << endl;
```
- img 값이 0 이상이면 + 기호를 붙여서 복소수 출력

```cpp
		else
```
- img 값이 0보다 작을 때 실행

```cpp
			cout << real << img << "j" << endl;
```
- img 값이 음수이면 + 없이 복소수 출력

```cpp
	}
```
- show 함수 종료

```cpp
	friend Complex& operator++(Complex& op1);
```
- 전위 ++ 연산자를 프렌드 함수로 선언
- 외부 함수가 Complex의 private 멤버인 real, img에 접근할 수 있게 함

```cpp
	friend Complex operator--(Complex& op1, int n);
```
- 후위 -- 연산자를 프렌드 함수로 선언
- 외부 함수가 Complex의 private 멤버인 real, img에 접근할 수 있게 함

```cpp
};
```
- Complex 클래스 종료

```cpp
Complex& operator++(Complex& op1){
```
- 전위 ++ 연산자 함수 시작

```cpp
	op1.real++;
```
- op1 객체의 real 값을 1 증가

```cpp
	op1.img++;
```
- op1 객체의 img 값을 1 증가

```cpp
	return op1;
```
- 증가된 op1 객체를 반환

```cpp
}
```
- 전위 ++ 연산자 함수 종료

```cpp
Complex operator--(Complex& op1, int n) {
```
- 후위 -- 연산자 함수 시작

```cpp
	Complex tmp = op1;
```
- 감소하기 전 op1 객체 값을 tmp에 저장

```cpp
	op1.real--;
```
- op1 객체의 real 값을 1 감소

```cpp
	op1.img--;
```
- op1 객체의 img 값을 1 감소

```cpp
	return tmp;
```
- 감소하기 전 값인 tmp 반환

```cpp
}
```
- 후위 -- 연산자 함수 종료

```cpp
int main() {
```
- 메인함수 시작

```cpp
	Complex x(2, -3);
```
- x 객체를 2-3j로 생성

```cpp
	++x;
```
- 전위 ++ 연산자로 x 객체의 real과 img 값을 1씩 증가

```cpp
	cout << "증가결과";
```
- 증가결과 안내문 출력

```cpp
	x.show();
```
- x 객체의 복소수 값 출력

```cpp
	x--;
```
- 후위 -- 연산자로 x 객체의 real과 img 값을 1씩 감소

```cpp
	cout << "감소결과";
```
- 감소결과 안내문 출력

```cpp
	x.show();
```
- x 객체의 복소수 값 출력

```cpp
	return 0;
```
- 0을 반환하고 프로그램 종료

```cpp
}
```
- 메인함수 종료
## 실행결과

# 실습과제 3
```cpp
#include <iostream>
```
- 입출력을 위해 iostream 헤더파일 포함

```cpp
using namespace std;
```
- std이름공간에 선언된 모든 이름에 std:: 생략

```cpp
class Power {
```
- Power 클래스 시작

```cpp
	int kick;
```
- kick 값을 저장할 정수 변수 kick 선언

```cpp
	int punch;
```
- punch 값을 저장할 정수 변수 punch 선언

```cpp
public:
```
- 외부에서 접근 가능한 public 영역 시작

```cpp
	Power(int kick = 0, int punch = 0) {
```
- kick과 punch 값을 전달받는 생성자 시작
- 값을 안 넣으면 기본값 0으로 설정

```cpp
		this->kick = kick; this->punch = punch;
```
- 전달받은 kick과 punch 값을 현재 객체의 멤버 변수에 저장

```cpp
	}
```
- 생성자 종료

```cpp
	void show();
```
- Power 객체의 kick과 punch 값을 출력하는 show 함수 선언

```cpp
	friend Power operator*(int op1, Power op2); 
```
- * 연산자를 프렌드 함수로 선언
- 외부 함수가 Power의 private 멤버인 kick, punch에 접근할 수 있게 함

```cpp
};
```
- Power 클래스 종료

```cpp
void Power::show() {
```
- Power 클래스의 show 함수 정의 시작

```cpp
	cout << "kick=" << kick << ',' << "punch=" << punch << endl;
```
- kick과 punch 값을 출력

```cpp
}
```
- show 함수 종료

```cpp
Power operator*(int op1, Power op2) {
```
- 정수와 Power 객체를 곱하는 * 연산자 함수 시작

```cpp
	Power tmp; 
```
- 곱한 결과를 저장할 Power 객체 tmp 생성

```cpp
	tmp.kick = op1 * op2.kick;
```
- op1과 op2의 kick 값을 곱해서 tmp.kick에 저장

```cpp
	tmp.punch = op1 * op2.punch;
```
- op1과 op2의 punch 값을 곱해서 tmp.punch에 저장

```cpp
	return tmp;
```
- 곱한 결과인 tmp 반환

```cpp
}
```
- * 연산자 함수 종료

```cpp

int main() {
```
- 메인함수 시작

```cpp
	Power a(3, 5), b;
```
- a 객체는 kick 3, punch 5로 생성
- b 객체는 기본값 0, 0으로 생성

```cpp
	a.show();
```
- a 객체의 kick과 punch 값 출력

```cpp
	b.show();
```
- b 객체의 kick과 punch 값 출력

```cpp
	b = 2 * a; 
```
- 정수 2와 a 객체를 곱한 결과를 b에 저장

```cpp
	a.show();
```
- a 객체의 kick과 punch 값 출력

```cpp
	b.show();
```
- b 객체의 kick과 punch 값 출력

```cpp
	return 0;
```
- 0을 반환하고 프로그램 종료

```cpp
}
```
- 메인함수 종료
## 실행결과

# 실습과제 4

## 실행결과

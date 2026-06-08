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

## 실행결과

# 실습과제 3

## 실행결과

# 실습과제 4

## 실행결과

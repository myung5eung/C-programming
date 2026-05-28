# 실습과제 1
### 프렌드 함수가 왜 필요한가?
프렌드 함수는 클래스의 멤버 함수가 아니지만, 클래스의 private 멤버에 접근해야 할 때 필요하다.

### 객체 지향형 언어의 특징 중의 하나인 다형성의 의미와 종류를 조사하시오
객체 지향형 언어의 특징인 다형성이란 하나의 이름이나 기능이 상황에 따라 여러 가지 형태로 다르게 동작하는 것을 의미한다.

1) 함수 중복

함수 중복은 같은 이름의 함수를 여러 개 정의하되, 매개변수의 개수나 자료형을 다르게 하여 서로 다른 기능을 수행하게 하는 것이다. 같은 함수 이름을 사용하면서도 입력되는 값에 따라 다른 처리를 할 수 있으므로 프로그램을 더 간단하고 이해하기 쉽게 만들 수 있다.

2) 연산자 중복

연산자 중복은 기존에 있던 연산자에 새로운 의미를 부여하여 객체에도 사용할 수 있도록 만드는 것이다. 같은 연산자라도 피연산자의 종류에 따라 다른 연산을 수행하게 하며, 객체 간의 연산을 자연스럽게 표현할 수 있다.

3) 함수 재정의

함수 재정의는 부모 클래스에 정의된 함수를 자식 클래스에서 다시 정의하여 사용하는 것이다. 부모 클래스의 기능을 그대로 사용하지 않고 자식 클래스의 특성에 맞게 기능을 변경하여 사용할 수 있다.

4) 가상 함수

가상 함수는 실행 중에 실제 객체의 종류에 따라 호출되는 함수가 결정되도록 하는 기능이다. 부모 클래스의 포인터나 참조를 사용하더라도 실제 객체가 자식 클래스이면 자식 클래스의 함수가 실행되도록 하며, 실행 시간 다형성을 구현할 때 사용한다.

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
class Complex;
```
- Complex 클래스를 미리 선언

```cpp
Complex ComplexAdd(Complex a, Complex b);
```
- Complex 객체 두 개를 더하는 ComplexAdd 함수 원형 선언

```cpp
class Complex
{
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
	Complex():Complex(0,0){}
```
- 기본 생성자를 통해 real과 img를 0으로 초기화

```cpp
	Complex(int real, int img);
```
- real과 img 값을 전달받는 생성자 선언

```cpp
	void show();
```
- 복소수 값을 출력하는 show 함수 선언

```cpp
	friend Complex ComplexAdd(Complex a, Complex b);
```
- ComplexAdd 함수를 프렌드 함수로 선언
- 클래스 외부 함수가 private 멤버인 real, img에 접근할 수 있게 함

```cpp
};
```
- Complex 클래스 종료

```cpp
Complex::Complex(int real, int img) { 
```
- Complex 생성자 정의 시작

```cpp
	this->real = real; this->img = img; 
```
- 전달받은 real과 img 값을 현재 객체의 멤버 변수에 저장

```cpp
	cout << "북소수 " << real << "+" << img << "j 생성" << endl;
```
- 복소수 생성 문장 출력

```cpp
}
```
- 생성자 종료

```cpp
Complex ComplexAdd(Complex a, Complex b){
```
- Complex 객체 두 개를 더하는 ComplexAdd 함수 시작

```cpp
	Complex sum;
```
- 합계를 저장할 Complex 객체 sum 생성

```cpp
	sum.real= a.real + b.real;
```
- a와 b의 실수부를 더해서 sum의 real에 저장

```cpp
	sum.img = a.img + b.img;
```
- a와 b의 허수부를 더해서 sum의 img에 저장

```cpp
	return sum;
```
- 더한 결과인 sum 반환

```cpp
}
```
- ComplexAdd 함수 종료

```cpp
void Complex::show(){
```
- Complex 클래스의 show 함수 정의 시작

```cpp
	cout << "두 북소수의 합은" << real << "+" << img << "j" << endl;
```
- 복소수의 실수부와 허수부 출력

```cpp
}
```
- show 함수 종료

```cpp
int main() {
```
- 메인함수 시작

```cpp
	Complex x(2, 3), y(-5, 10), sum;
```
- x 객체는 2+3j로 생성
- y 객체는 -5+10j로 생성
- sum 객체는 기본 생성자로 생성

```cpp
	sum = ComplexAdd(x, y);
```
- x와 y를 ComplexAdd 함수로 더한 결과를 sum에 저장

```cpp
	cout << "두 북소수의 합은 ";
```
- 결과 출력 전 안내문 출력

```cpp
	sum.show();
```
- sum 객체의 복소수 값 출력

```cpp
}
```
- 메인함수 종료
## 실행결과
<img width="931" height="258" alt="image" src="https://github.com/user-attachments/assets/61c80dd7-ebc8-4636-99ad-6db05432d345" />


# 실습과제 3

## 실행결과
<img width="972" height="271" alt="image" src="https://github.com/user-attachments/assets/352e47af-27b4-4448-91fc-2cc20eeac881" />


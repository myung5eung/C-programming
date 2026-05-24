# 실습과제 1
###  참조에 의한 호출과 주소에 의한 호출의 차이점을 설명하라
참조에 의한 호출은 함수의 매개변수를 참조 변수로 선언하여, 인자로 전달된 원본 변수의 별명처럼 사용하는 방식이다. 함수 호출 시 참조 매개변수는 새로운 메모리 공간을 따로 할당받지 않고 인자 변수와 같은 공간을 공유한다. 참조 매개변수의 값을 변경하면 원본 변수의 값도 함께 변경된다.

주소에 의한 호출은 함수 호출 시 변수의 주소를 인자로 전달하고, 호출된 함수에서는 포인터 매개변수로 그 주소를 받아 사용하는 방식이다. 포인터(주소를저장하는변수) 매개변수는 메모리 공간을 할당한다.
###  참조에의한호출의장점은무엇인가?
참조에 의한 호출의 장점은 호출 방법은 값에 의한 호출처럼 간단하지만, 실행 결과는 주소에 의한 호출처럼 원본 변수의 값을 변경할 수 있다는 점이다. 객체를 전달할 때도 객체 전체를 복사하지 않고 원본 객체를 참조하므로 메모리를 절약하고 처리 시간을 줄일 수 있다.

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
void add2(int& value);
```
- 정수 값을 참조로 받아 2만큼 증가시키는 함수 원형 선언

```cpp
int main(void)
{
```
- 메인함수 시작

```cpp
	int number;
```
- 입력받을 정수 변수 number 선언

```cpp
	cout << "정수를입력하세요: ";
	cin >> number;
```
- 사용자에게 정수 입력받음

```cpp
	add2(number);
```
- add2 함수에 number를 전달하여 함수 호출

```cpp
	cout << "2만큼증가한값:" << number << endl;
```
- 2만큼 증가한 값 출력

```cpp
	return 0;
}
```
- 0을 반환하고 프로그램 종료

```cpp
void add2(int& value)
{
```
- 정수 값을 참조로 받아 2만큼 증가시키는 add2 함수 시작

```cpp
	value += 2;
```
- value 값을 2만큼 증가시킴

```cpp
}
```
- 함수 종료
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
void swap(int&x, int&y);
```
- 정수 두 개를 참조로 받아 값을 바꾸는 함수 원형 선언

```cpp
int main(void)
{
```
- 메인함수 시작

```cpp
	int x, y;
```
- 입력받을 정수 변수 x, y 선언

```cpp
	cout << "정수x를 입력 하시오: ";
	cin >> x;
```
- 사용자에게 정수 x 입력받음

```cpp
	cout << "정수y를 입력 하시오: ";
	cin >> y;
```
- 사용자에게 정수 y 입력받음

```cpp
	cout << "swap함수 호출 전 x=" << x << ". y=" << y << endl;
```
- swap 함수 호출 전 x와 y 출력

```cpp
	swap(x, y);
```
- swap 함수에 x와 y를 전달하여 함수 호출

```cpp
	cout << "swap함수 호출 후 x=" << x << ". y=" << y << endl;
```
- swap 함수 호출 후 x와 y 출력

```cpp
	return 0;
}
```
- 0을 반환하고 프로그램 종료

```cpp
void swap(int& x, int& y)
{
```
- 정수 두 개를 참조로 받아 값을 바꾸는 swap 함수 시작

```cpp
	int temp = x;
```
- x 값을 임시 변수 temp에 저장

```cpp
	x = y;
```
- y 값을 x에 저장

```cpp
	y = temp;
```
- temp에 저장해둔 값을 y에 저장

```cpp
}
```
- 함수 종료
## 실행결과

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
void get_parts(double r, int&x, double&y);
```
- 실수 하나를 받아 정수부와 소수부를 참조로 저장하는 함수 원형 선언

```cpp
int main(void)
{
```
- 메인함수 시작

```cpp
	double real;
```
- 입력받을 실수 변수 real 선언

```cpp
	cout << "실수를 입력하시오: ";
	cin >> real;
```
- 사용자에게 실수 입력받음

```cpp
	int x;
	double y;
```
- 정수부를 저장할 변수 x 선언
- 소수부를 저장할 변수 y 선언

```cpp
	get_parts(real, x, y);
```
- get_parts 함수에 real, x, y를 전달하여 함수 호출

```cpp
	cout << "정수부: " << x << endl;
```
- 정수부 출력

```cpp
	cout << "소수부: " << y << endl;
```
- 소수부 출력

```cpp
	return 0;
}
```
- 0을 반환하고 프로그램 종료

```cpp
void get_parts(double r, int& x, double& y)
{
```
- 실수를 받아 정수부와 소수부를 나누는 get_parts 함수 시작

```cpp
	x = int(r);
```
- 실수 r을 정수형으로 변환하여 정수부를 x에 저장

```cpp
	y = r - x;
```
- 실수 r에서 정수부 x를 빼서 소수부를 y에 저장

```cpp
}
```
- 함수 종료
## 실행결과

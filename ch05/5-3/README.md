# 실습과제 1

### 참조에 의한 호출의 장점을 2가지 측면(메모리사용량, 처리시간)에서 설명하시오

메모리사용량 측면에서 참조 매개변수는 별도의 메모리 공간을 새로 만들지 않고 원본 변수의 공간을 공유한다. 객체처럼 크기가 큰 자료를 함수에 전달할 때 객체 전체를 복사하지 않아도 되므로 메모리 사용량을 줄일 수 있다.
처리시간 측면에서 참조에 의한 호출은 인자값을 매개변수에 복사하는 과정이 필요 없다. 객체를 값으로 전달하면 복사 과정이 발생하지만 참조로 전달하면 원본 객체를 직접 사용하므로 처리시간이 줄어든다.
### C++언어 함수의 반환과정을 상세히 설명하라

함수의 반환과정은 임시변수 생성 -> 반환값 저장 → 함수 호출문 → 대입 → 임시변수 소멸

### 반환형이 참조로 선언된 경우 반환값의 의미를 설명하라
반환형이 참조로 선언된 경우 함수는 값을 복사해서 반환하는 것이 아니라, 이미 존재하는 변수나 객체의 별명을 반환한다.

### 참조 리턴을 응용하는 예제를 인터넷에서 검색하여 실행해보고 설명하시오

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
void Uppercase(string& a);
```
- 문자열을 참조로 받아 대문자로 변환하는 함수 원형 선언

```cpp
int main(void)
{
```
- 메인함수 시작

```cpp
	string s1("hello");
```
- 문자열 s1을 hello로 초기화

```cpp
	cout << "변환전 문자열 " << s1 << endl;
```
- 변환 전 문자열 출력

```cpp
	Uppercase(s1);
```
- Uppercase 함수에 s1을 전달하여 함수 호출

```cpp
	cout << "변환후 문자열 " << s1 << endl;
```
- 변환 후 문자열 출력

```cpp
	return 0;
}
```
- 0을 반환하고 프로그램 종료

```cpp
void Uppercase(string& a)
{
```
- 문자열을 참조로 받아 대문자로 변환하는 Uppercase 함수 시작

```cpp
	for (int i = 0; i < a.length(); i++)
	{
```
- 문자열의 처음부터 끝까지 반복문 실행

```cpp
		a[i] = toupper(a[i]);
```
- 문자열의 각 문자를 대문자로 변환하여 저장

```cpp
	}
```
- 반복문 종료

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
void SwapString(string& s1, string& s2);
```
- 문자열 두 개를 참조로 받아 두 문자열의 값을 바꾸는 함수 원형 선언

```cpp
int main(void)
{
```
- 메인함수 시작

```cpp
	string s1("hello");
	string s2("world");
```
- 문자열 s1을 hello로 초기화
- 문자열 s2를 world로 초기화

```cpp
	cout <<"교환전 문자열 " << s1+" " << s2 << endl;
```
- 교환 전 문자열 s1과 s2 출력

```cpp
	SwapString(s1, s2);
```
- SwapString 함수에 s1과 s2를 전달하여 함수 호출

```cpp
	cout << "교환루 문자열 " << s1+" " << s2 << endl;
```
- 교환 후 문자열 s1과 s2 출력

```cpp
	return 0;
}
```
- 0을 반환하고 프로그램 종료

```cpp
void SwapString(string& s1, string& s2)
{
```
- 문자열 두 개를 참조로 받아 값을 바꾸는 SwapString 함수 시작

```cpp
	string temp = s1;
```
- s1 값을 임시 변수 temp에 저장

```cpp
	s1 = s2;
```
- s2 값을 s1에 저장

```cpp
	s2 = temp;
```
- temp에 저장해둔 값을 s2에 저장

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
class Circle {
```
- Circle 클래스 시작

```cpp
	int radius;
```
- 원의 반지름을 저장할 변수 radius 선언

```cpp
public:
```
- 외부에서 접근 가능한 public 영역 시작

```cpp
	Circle(int r):radius(r){}
```
- 생성자를 통해 radius를 r로 초기화

```cpp
	int getRadius() { return radius; }
```
- radius 값을 반환하는 getRadius 함수 정의

```cpp
	Circle& plus(int a) {
```
- 반지름을 증가시키고 자기 자신을 참조로 반환하는 plus 함수 시작

```cpp
		radius += a;
```
- radius 값을 a만큼 증가시킴

```cpp
		return *this;
```
- 현재 객체 자신을 반환

```cpp
	}
```
- 함수 종료

```cpp
	Circle& minus(int a) {
```
- 반지름을 감소시키고 자기 자신을 참조로 반환하는 minus 함수 시작

```cpp
		radius -= a;
```
- radius 값을 a만큼 감소시킴

```cpp
		return *this;
```
- 현재 객체 자신을 반환

```cpp
	}
```
- 함수 종료

```cpp
};
```
- Circle 클래스 종료

```cpp
int main() {
```
- 메인함수 시작

```cpp
	Circle a(5);
```
- 반지름이 5인 Circle 객체 a 생성

```cpp
	a.plus(1).plus(2).plus(3).minus(3).minus(2).minus(1).minus(5);
```
- plus와 minus 함수를 연속으로 호출하여 radius 값 변경

```cpp
	cout << "객체 a의 반지름은 " << a.getRadius();
```
- 객체 a의 반지름 출력

```cpp
	return 0;
}
```
- 0을 반환하고 프로그램 종료
## 실행결과

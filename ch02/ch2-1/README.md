# 실습과제 1 
## 전처리또는 선행처리 단계를 설명하라 
컴파일 과정 전에 선행처리 단계가 있다. 선행처리 과정에서 소스파일에 헤더파일을 포함시키거나 일부 문장을 바꾸는 작업 등 특별한 작업을 수행하는 단계이다. 선행처리 명령문은 #기호로 시작한다.

## 객체 cin, cout은 어디에 선언되어 있는가? 선언된 파일을 찾아서 의미를 설명하고 캡쳐하여 첨부하라 -> 교재 75페이지 2.5절 내용을 참고할 것
iostream안에 cin은 istream타입으로 cout는 ostream타입의 객체로 선언되어 있다.
<img width="917" height="627" alt="image" src="https://github.com/user-attachments/assets/a577dcbd-c110-4360-a5b8-706c466aa057" />

## 프로그램을 링크할때 이름 충돌이 발생하는 경우를 설명해보라
다른 사람이 작성한 목적파일을 링크하는 경우
## 스트림이란 무엇인가?
데이터의 연결통로
## 표준 출력 스트림을 정의할 때 사용하는 C언어 자료형은?
FILE*
## 표준 출력 스트림을 정의할 때 사용하는 C++언어 자료형은?
ostream

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
int main(void)
```
- 메인함수 시작
```
	cout << "이름 : 홍길동\n";
	cout << "주소 : 군산시 대학로 558\n";
	cout << "학번 : 201012\n";
	cout << "차종 : 벤츠";
```
- 이름, 주소, 학번, 차종을 출력
```
	return 0;
```
- 0을 반환하고 함수 종료
## 실습과제2의 실행결과
<img width="646" height="253" alt="image" src="https://github.com/user-attachments/assets/350d0c25-af67-4ed3-9621-fdda7d5b7b6b" />
  
# 실습과제 3

```
#include <iostream>
```
- cin, cout, 등 라이브러리 객체의 선언을 포함하고 있는 헤더파일 iostream을 포함
```
using namespace std;
```
- std이름공간에선언된모든이름에std::생략 
```
int main(void)
```
- 메인함수 시작
```
	cout << "군산대학교 \"홍길동\"\n";
	cout << "\"축하합니다.\"\n";
	cout << "100% \\취업률\\";
```
- 대학 합격안내 문구 출력
```
	return 0;
```
- 0을 반환하고 함수 종료
## 실습과제3의 실행결과
<img width="740" height="242" alt="image" src="https://github.com/user-attachments/assets/75d59867-afd3-400a-a8dd-31dad4b113e7" />

# 실습과제 4

```
#include <iostream>
```
- cin, cout, 등 라이브러리 객체의 선언을 포함하고 있는 헤더파일 iostream을 포함
```
using namespace std;
```
- std이름공간에선언된모든이름에std::생략 
```
int main(void)
```
- 메인함수 시작
```
	for (int i = 0; i < 7; i++)
```
-i가 7보다 작을동안 증가하는 것을 반복
```
	{
		for (int j = 0; j < 7; j++) {
```
-i가 증가하는 반복 for문 안에서 j가 7보다 작을동안 증가하는 것을 반복
```
	if (i == j || i+j== 6 )
```
-만약 i와 j가 같거나(행과 열이 같거나) 더한 값이 6이면
```
	cout << "*";
```
- *을 출력
```
  else cout << "  ";
```
- 아니라면 공백 출력
```
  }
		cout << "\n";
```
- j가 증가하는 for문이 끝나면 줄을 바꿈
```
	}
	return 0;
```
- 0을 반환하고 함수 종료

## 실습과제4의 실행결과
<img width="730" height="327" alt="image" src="https://github.com/user-attachments/assets/05171f7f-5c1a-4762-a635-8cc979d121f4" />

# 실습과제 5

```
#include <iostream>
```
- cin, cout, 등 라이브러리 객체의 선언을 포함하고 있는 헤더파일 iostream을 포함
```
using namespace std;
```
- std이름공간에선언된모든이름에std::생략 
```
int main(void)
```
- 메인함수 시작
```
	for (int i = 0; i < 4; i++)
	{
```
- i가 4보다 작을동안 반
```
	for (int j = 0; j <= i; j++)
		{
```
- j가 i보다 작거나 같을 동안 반복
```
  if (i+1>=j)
```
- 만약 i+1값이 j보다 크거나 같으면
```
 cout << "*";
```
- *출력
```
	else cout << "  ";
```
- 아닐시 공백 출력
```
}
		cout << "\n";
	}
```
- j가 증가하는 반복문이 끝나면 줄바꿈 
```
}
	return 0;
```
- 0을 반환하고 함수 종료
## 실습과제5 실행결과
<img width="812" height="323" alt="image" src="https://github.com/user-attachments/assets/f5912024-033f-437b-acb1-b6fe7225f678" />

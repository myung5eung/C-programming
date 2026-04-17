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
- std 이름공간 생략하고 cin, cout, string 등을 바로 사용
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
- std 이름공간 생략하고 cin, cout, string 등을 바로 사용

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
<img width="845" height="236" alt="image" src="https://github.com/user-attachments/assets/35331614-6aaf-4427-af78-49264f69672c" />

## 연습문제 4번
<img width="846" height="232" alt="image" src="https://github.com/user-attachments/assets/a7dee6c3-4d83-4621-9f72-28a9a1067120" />

## 연습문제 5번
<img width="977" height="312" alt="image" src="https://github.com/user-attachments/assets/ad2de49c-ac49-46f8-9c81-e2ee9fcae07a" />

## 연습문제 9번
<img width="667" height="275" alt="image" src="https://github.com/user-attachments/assets/8625555b-18a6-4d39-a449-cd5af81c0337" />

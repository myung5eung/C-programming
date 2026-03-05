# 실습과제1 
### 1. IDE란 무엇인가?
 통합개발환경(IDE)란 프로그램 개발을 위해 필요한 코드 작성, 컴파일, 실행, 디버깅 등을 하나의 프로그램에서 수행할 수 있도록 제공하는 소프트웨어 환경이다.<br>
### 2. IDE의 종류에 대하여 조사하시오.
 Pycharm(Python), Visual Studio(C, C++, C#), Visual Studio Code(거의 모든 언어), Xcode(apple환경에서의 개발), Eclipse(Java)<br>
### 3. IDE에 포함된 기능은 무엇인가?
 코드 작성, 컴파일, 빌드, 프로그램 실행, 디버깅, 프로젝트 관리 기능 등 개발을 위해 필요한 기능이 포함되어 있다.<br>

# 실습과제2
- 교재 37페이지 1.6절의 C++ 프로젝트를 작성하고 빌드 후 소스코드와 실행결과를 첨부하라<br>
- 소스파일(cpp), 목적파일(obj), 실행파일(exe)의 위치를 찾아보라 -> 파일탐색기 검색화면을 캡쳐하여 첨부할 것<br>
- 파일탐색기에서 보기옵션에서 확장자가 보이도록 설정하여 파일종류를 확인할 수 있도록 캡쳐할 것<br>
## 소스코드설명
```
#include <iostream>
```
- cin, cout, 등 라이브러리 객체의 선언을 포함하고 있는 헤더파일 iostream을 포함하라
```
int main()
```
- 메인함수 시작
```
std::cout << "Hello";
```
- 화면에 Hello를 출력, std::cout은 화면에 출력해주는 객체, << 삽입연산자 함수
```
return 0;
```
- 0을 반환하고 함수종료
## 실행결과
<img width="685" height="218" alt="스크린샷 2026-03-05 211819" src="https://github.com/user-attachments/assets/348826d2-800a-463f-ab5c-97a36ec7525c" />

## 파일위치
<img width="952" height="268" alt="스크린샷 2026-03-05 211040" src="https://github.com/user-attachments/assets/c1593d4c-e26c-4dd1-ab25-d6b34d9b9dc8" />
<img width="936" height="424" alt="스크린샷 2026-03-05 211026" src="https://github.com/user-attachments/assets/23051627-136e-45f5-80a1-3b3fa2c3ba20" />
<img width="935" height="353" alt="스크린샷 2026-03-05 211013" src="https://github.com/user-attachments/assets/6b98ec4f-5f73-4ddc-a4d5-ceb5a9d93e05" />

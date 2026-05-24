# 실습과제 1

## 1번 문제
### c++의 함수 인자 전달 방식이 아닌것? 
1. 값에 의한 호출 2. 주소에 의한 호출 3. 참조에 의한 호출 4. 묵시에 의한 호출
=> 4

## 2번 문제
### 일반적으로 함수 호출 시 가장 비용 부담이 큰 것은?
1. 값에 의한 호출 2. 주소에 의한 호출 3. 참조에 의한 호출 4. 묵시에 의한 호출
=> 1

## 3번 문제
```
void f(int n[]);
int main(void){
  int m[3]={1,2,3};
  f(m);
}
```
### 다음에서 f()함수가 호출 될 때 사용되는 인자 전달 방식은 무엇인가?
=> 주소에 의한 호출
## 4번 문제

### 다음 두 함수 선언은 같은 것?
1. void f(int p[]); 와 void f(int* p) => 같다.
2. void f(int *p);와 void f(int& p) => 다르다.
## 5번 문제
### 다음 프로그램의 실행 결과는 무엇인가?
```
#include <iostream>
using namespace std;
void square(int n){ n=n*n; }
int main()
{
  int m=5;
  square(m);
  cout<< m;
}
```
- 5
```
#include <iostream>
using namespace std;
void square(int& n){ n=n*n; }
int main()
{
  int m=5;
  square(m);
  cout<< m;
}
```
-  25

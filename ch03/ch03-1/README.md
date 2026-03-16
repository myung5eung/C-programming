# 실습과제 1
### 1. 구조체와클래스의차이점을설명하라.
   구조체는 서로 다른 종류의 데이터를 하나로 묶어 저장하기 위한 자료형이고, 클래스는 변수 뿐 아니라 데이터를 처리하는 함수도 묶어서 정의하는 사용자 정의 자료형이라는 차이가 있다.
### 2. 클래스와객체의차이점을설명하라.
  클래스는 관련있는 변수와 함수를 모아 놓은 것으로 틀에 가까워서 컴파일할 때만 필요하고 기계어로 번역되지 않지만, 객체는 그 클래스형 변수로 실제로 메모리에 할당이되는 실체이다.
### 3. sizeof(클래스명)의 결과값을 출력해보고 결과를 설명하라.
   실습과제 2에 sizeof(클래스명)을 하면 8이라는 크기가 출력되는데 int형 변수 두 개가 각각 4바이트이므로 8이라는 크기가 출력된다, 이때 클래스 안에 있는 함수는 객체마다 따로 메모리를 가지는 것이 아니라 계산에 포함되지 않는다.  

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
class Triangle {
```
- 클래스 Triangle 선언
```
public:
```
- 접근 지정자를 public으로
```
int wid;
int hei;
```
-삼각형의 밑변과 높이를 저장할 멤버 변수
```
double getArea();
```
- 삼각형 면적을 구할 멤버 함수 선언
```
}; 
```
- 클래스 선언부 닫음
```
double Triangle::getArea() {
```
- Triangle 클래스의 멤버 함수 getArea()의 구현부
```
return (wid * hei) * 0.5; }
```
- 밑변 × 높이 ÷ 2 로 삼각형의 면적을 계산하여 반환
```
int main(void) {
```
- 메인함수 시작
```
Triangle t;
```
- 객체 t생성
```
t.wid = 3;
t.hei = 5;
```
- 객체 t의 멤버 변수에 값을 저장
```
cout << "삼각형의 면적은" << t.getArea();
```
- 삼각형의 면적 출력 
```
return 0; }
```
- 0 반환 후 함수종료
## 실행결과
<img width="692" height="207" alt="image" src="https://github.com/user-attachments/assets/97e9067c-e375-436e-afc3-ebb5f127f2bb" />

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
class Sphere {
```
- 클래스 Sphere 선언
```
public:
```
- 접근 지정자를 public으로
```
int rad;
```
- 반지름을 저장할 멤버 변수
```
double getVolume();
double getArea();
```
- 구의 부피와 표면적을 구할 멤버 함수 선언
```
}; 
```
- 클래스 선언부 닫음
```
double Sphere::getVolume() {
```
- Sphere 클래스의 멤버 함수 getVolume()의 구현부
```
return  (4.0 / 3.0) * 3.14 * rad * rad * rad; }
```
- 구의 부피구하는 공식을 계산하여 반환
```
double Sphere::getArea() {
```
- Sphere 클래스의 멤버 함수 getArea()의 구현부
```
return 4 * 3.14 * rad * rad; }
```
- 구의 부피 공식을 이용하여 계산한 값을 반환
```
int main(void) {
```
- 메인함수 시작
```
Sphere c;
```
- 객체 c생성
```
c.rad = 3;
```
- 객체 c의 멤버 변수에 값을 저장
```
cout << "구의 부피는 " << c.getVolume() << "\n";
```
- 구의 부피 출력
```
cout << "구의 표면적은 " << c.getArea() << "\n";
```
- 구의 표면적 출력
```
return 0; }
```
- 0 반환 후 함수종료

## 실행결과
<img width="683" height="216" alt="image" src="https://github.com/user-attachments/assets/44da1a34-ea7d-493e-a2dd-6d601bd9c3cf" />

# 실습과제 4

## 실행결과

# 실습과제 5

## 실행결과

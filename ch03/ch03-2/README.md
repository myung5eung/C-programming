# 실습과제 1
### C++에서 생성자를 통하여 멤버 변수의 초기화를 하는이유를 설명하라.
초기화 하지 않으면 쓰레기 값이 들어가 오류를 발생 시킬 수 있기 때문에 객체 생성과 동시에 정상적인 값으로 초기화해 프로그램의 안전성을 확보한다.

### 생성자 작성시 생성자 몸체에서 멤버를 초기화하는 것 보다 멤버 초기화 리스트에서 초기화하는 이유를 설명하라.
초기화 리스트를 사용하면 멤버 변수가 생성되는 동시에 원하는 값으로 직접 초기화되어 효율적이다. 또한 const와 참조연산을 다루려면 멤버초기화 리스트로 작성해야만한다.

### 위임, 타겟 생성자로 나누어 작성하는 이유를 설명하라
여러 생성자에서 공통적으로 수행하는 복잡한 초기화 로직을 하나의 타겟 생성자에 몰아넣고, 다른 생성자들은 이를 호출하는 위임 생성자로 나누어 작성하면 코드중복을 제거 할 수 있기 때문이다.
또한 수정 할 때도 한곳만 수정하면 되어 유지보수에도 용이하다.
### 함수몸체(body)에서 생성자를 직접 호출하면 어떻게 되는지 조사해보라.
생성중인 객체가 초기화되지 않고 임시 객체가 생성되는 의도와 다른 결과가 나온다. 

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
int w, h;
```
- 삼각형의 밑변과 높이를 저장할 멤버 변수

```
public:
```
- 접근 지정자를 public

```
Triangle();
```
- 매개변수가 없는 생성자 선언

```
Triangle(int a, int b);
```
- 밑변과 높이를 전달받는 생성자 선언

```
double getArea() { return (1.0 / 2.0) * w * h; }
```
- 삼각형 면적을 구하는 멤버 함수 정의

```
};
```
- 클래스 선언부 닫음

```
Triangle::Triangle() :Triangle(1, 1) {}
```
- 생성자 정의, 위임 생성자를 사용하여 (1,1)로 초기화

```
Triangle::Triangle(int a, int b) : w(a), h(b) {}
```
- 멤버 초기화 리스트를 사용하여 w, h 초기화

```
int main(void) {
```
- 메인함수 시작

```
Triangle tri1;
```
- 객체 tri1 생성 

```
cout << "삼각형의면적은" << tri1.getArea() << endl;
```
- tri1의 삼각형 면적 출력

```
Triangle tri2(2, 4);
```
- 객체 tri2 생성

```
cout << "삼각형의면적은" << tri2.getArea() << endl;
```
- tri2의 삼각형 면적 출력

```
return 0; }
```
- 0을 반환하고 함수 종료

## 실행결과
<img width="1682" height="678" alt="image" src="https://github.com/user-attachments/assets/5f900ac7-0dcd-463d-ad53-f06e524d52b3" />


# 실습과제 3
```
#include <iostream>
```
- cin, cout, 등 라이브러리 객체의 선언을 포함하고 있는 헤더파일 iostream을 포함

```
using namespace std;
```
- std이름공간에 선언된 모든 이름에 std:: 생략

```
class Sphere {
```
- 클래스 Sphere 선언

```
int rad;
```
- 구의 반지름을 저장할 멤버 변수

```
public:
```
- 접근 지정자 public

```
Sphere();
```
- 매개변수가 없는 생성자 선언

```
Sphere(int a);
```
- 반지름을 전달받는 생성자 선언

```
double getVolume() { return (4.0 / 3.0) * 3.14 * rad * rad * rad; };
```
- 구의 부피를 구하는 멤버 함수 정의 

```
};
```
- 클래스 선언부 닫음

```
Sphere::Sphere() :Sphere(1) {}
```
- 생성자 정의, 위임 생성자를 사용하여 반지름을 1로 초기화

```
Sphere::Sphere(int a) : rad(a) {}
```
- 멤버 초기화 리스트를 사용하여 rad 초기화

```
int main() {
```
- 메인함수 시작

```
Sphere sph1;
```
- 객체 sph1 생성

```
cout << "구의부피는" << sph1.getVolume() << endl;
```
- sph1의 구의 부피 출력

```
Sphere sph2(3);
```
- 객체 sph2 생성 

```
cout << "구의부피는" << sph2.getVolume() << endl;
```
- sph2의 구의 부피 출력

```
return 0; }
```
- 0 반환 후 함수종료


## 실행결과

# 실습과제 4
```
#include <iostream>
```
- cin, cout, 등 라이브러리 객체의 선언을 포함하고 있는 헤더파일 iostream을 포함

```
using namespace std;
```
- std이름공간에 선언된 모든 이름에 std:: 생략

```
class Rectangle{
```
- 클래스 Rectangle 선언

```
int width, height;
int x, y;
```
- 사각형의 너비, 높이와 좌표(x, y)를 저장할 멤버 변수

```
public:
```
- 접근 지정자 public

```
Rectangle();
```
- 매개변수가 없는 생성자 선언

```
Rectangle(int w, int h);
```
- 좌표를 받을 생성자 선언
```
Rectangle(int x, int y, int width, int height);
```
- 좌표와 크기를 모두 받는 생성자 선언

```
int getArea() { return width * height; }
```
- 사각형의 넓이을 구하는 멤버 함수

```
int getCircum(){ return (width + height) * 2; }
```
- 사각형의 둘레를 구하는 멤버 함수

```
void getCoo(){ cout << "(" << x + width << "," << y - height << ")"; }
```
- 사각형의 우측 하단 좌표를 출력하는 멤버 함수

```
};
```
- 클래스 선언부 닫음

```
Rectangle::Rectangle() : Rectangle(1, 1, 1, 1) {}
```
- 기본 생성자 정의, 위임 생성자를 사용하여 모든 멤버를 1로 초기화

```
Rectangle::Rectangle(int x, int y):Rectangle(x, y, 1, 1) {}
```
- 두 개의 값을 받는 생성자 정의, width와 height를 1로 초기화

```
Rectangle::Rectangle(int x, int y, int width, int height):x(x), y(y), width(width), height(height) {
}
```
- 멤버 초기화 리스트를 사용하여 x, y, width, height 초기화

```
int main() {
```
- 메인함수 시작

```
Rectangle rect1;
```
- 객체 rect1 생성

```
Rectangle rect2(3, 5);
```
- 객체 rect2 생성 

```
Rectangle rect3(3, 5, 2, 4);
```
- 객체 rect3 생성 

```
cout << "rect1의 면적은: " << rect1.getArea() << "\n";
```
- rect1의 면적 출력

```
cout << "rect2의 둘레길이는: " << rect2.getCircum() << "\n";
```
- rect2의 둘레 출력

```
cout << "rect3의 우측하단 좌표는: ";
```
- rect3 좌표 출력 안내

```
rect3.getCoo();
```
- rect3의 우측 하단 좌표 출력

```
return 0;
```
- 0 반환 후 프로그램 종료

```
}
```
- 함수 종료
## 실행결과
<img width="1446" height="631" alt="image" src="https://github.com/user-attachments/assets/b5f0ec82-201a-41fa-96fb-002bf17a6107" />

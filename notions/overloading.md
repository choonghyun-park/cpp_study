# Function Overloading
함수 오버로딩(Function Overloading)이란, 함수명은 같으며 인자의 자료형이나 수가 다른 함수의 선언을 허용하는 것을 말한다. C에서는 함수 오버로딩을 허용하지 않지만, C++은 허용한다. 

## 간단한 예시
```cpp
#include <iostream>

using namespace std;

void func(int a) {
    cout << "void func(int a) 호출" << endl;
}

void func(int a,int b) {
    cout << "void func(int a,int b) 호출" << endl;
}

int main() {
    func(4);
    func(5,6);
    return 0;
}
```


결과
```
void func(int a) 호출
void func(int a,int b) 호출
```
위와 같이, func이라는 동일한 이름의 함수를 선언하였지만, 매개변수의 갯수가 서로 다르기 때문에 둘다 선언 가능하다. 또한 매개변수 개수에 따라서 다른 함수가 호출되는 것을 알 수 있다. \
당연하게도, 위 상황에서 매개변수를 3개 지정하여 호출하면 오류가 난다. 

## Overloading의 특징
1. 함수명이 같아야 한다.
2. 매개변수의 수가 다르거나, 아니면 그 매개변수의 수가 같고 자료형이 달라야만 한다.
3. 위의 두 조건을 모두 만족하면 반환형의 차이는 함수 오버로딩의 영향을 미치지 않는다.


### 예제
아래 경우는 모두 매개변수의 수가 다르거나, 같더라도 자료형이 다른 경우이기 때문에 오버로딩 가능하다.
```cpp
int add(int a, int b) {...}         // add(3,4);
int add(double a, double b) {...}   // add(3.1,4.2);
float add(float a, float b) {...}   // add(3.1f,4.2f);
int add(int a, int b, int c)        // add(1,2,3);
```
주의할 것은 함수의 매개변수의 수와 자료형이 일치하는데, 반환형만 다른 경우는 오버로딩이 되지 않는다는 것이다. 생각해 보면 당연한 것인게, 호출시에 어떤 반환형의 함수를 호출한 것인지 구분할 수 없기 때문에 오버로딩이 불가능하다.



# namespace
c++의 namespace의 개념에 대한 설명을 정리한 페이지입니다.

## namespace가 필요한 이유
두 팀에서 프로젝트를 진행하다가 결과물을 합치는 경우, 함수명, 변수명 등이 충돌할 수도 있다. 이러한 경우 namespace로 함수나 변수명의 소속을 지정해줄 수 있다. namespace는 관련된 것들끼리 같은 공간으로 묶어준다는 의미이다.

### 간단한 namespace 선언
아래와 같이 선언하여 사용하면 된다. \
A.h
```cpp
namespace A {
    void dosomething(void){
        // code
    }
};
```
B.h
```cpp
namespace B {
    void dosomething(void){
        // code
    }
};
```
### 예시
```cpp
#include <iostream>

namespace A {
    void add() {
        std::cout << "A의 add() 호출" << std::endl;
    }
}

namespace B {
    void add() {
        std::cout << "B의 add() 호출" << std::endl;
    }
}

int main() {
    A::add();
    B::add();
    return 0;
}
```
출력
```
A의 add() 호출
B의 add() 호출
```
## using
namespace를 사용하는 경우 `::` 을 사용해서 함수나 변수의 소속을 지정해줘야 한다. 이게 매 함수나 변수마다 해줘야 하는 일이면 상당히 귀찮을 것이다. 이럴 때 `using` 을 사용하여 미리 사용할 namespace를 선언해주면, `::`을 붙이지 않고 바로 함수나 변수를 사용할 수 있다.

```cpp
#include <iostream>

using namespace std;
namespace A {
    void add() {
        cout << "A의 add() 호출" << endl;
    }
    void minus() {
        cout << "A의 minus() 호출" << endl;
    }
}

namespace B {
    void add() {
        cout << "B의 add() 호출" << endl;
    }
}

using A::add;

int main() {
    add();
    A::minus();
    return 0;
}
```
출력
```
A의 add() 호출
A의 minus() 호출
```
`A::add`만 따로 using으로 선언해줘도 되고, `using namespace std`처럼 namespace 자체를 선언해 줄 수도 있다. \
단, 기존에 선언된 함수나 변수명과 using 을 사용해 선언한 namespace 상의 함수나 변수명이 서로 겹치는 경우 충돌이 일어난다.

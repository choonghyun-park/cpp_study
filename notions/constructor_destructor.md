# Constructor & Destructor
이전 class 포스팅에서 class의 변수를 초기화하기 위해서 SetInfo() 와 같은 함수를 만들어 사용하였다. 생성자를 사용하면 추가적인 함수 호출 없이 객체를 생성하면서 변수를 초기화 하거나 생성시 수행해야 하는 작업 등을 지정할 수 있다.

## 생성자(Constructor) 
### 문법
```
class 클래스명 {
public:
    클래스명(매개변수...)
    {
        // ...
    }    
    // ..
}
```

### 예제
이전 class 포스팅에서 SetInfo()를 사용하여 변수를 초기화 했던 것을 생성자를 사용해서 작성하면 다음과 같다. \
아래 코드에서 student 클래스의 student()함수가 생성자를 지정한 것이다.
```cpp
#include <iostream>

using namespace std;

class student {
private:
    char * name;
    int age;
    char * hobby;
public:
    student(char * _name, int _age, char * _hobby);
    void ShowInfo();
    void Study();
    void Sleep();
};

student::student(char * _name, int _age, char * _hobby) {
    name = _name;
    age = _age;
    hobby = _hobby;
}

void student::ShowInfo() {
    cout <<"이름: " << name << ", 나이:" << age << ", 취미: " << hobby << endl;
}

void student::Study() {
    cout << "공부!" << endl;
}

void student::Sleep() {
    cout << "잠!" << endl;
}

int main(){
    student stu("김철수",16,"컴퓨터 게임");
    stu.ShowInfo();
    return 0;
}
```
출력
```
이름: 김철수, 나이:16, 취미: 컴퓨터 게임
```
### 오버로딩(Overloading)
생성자 역시 함수이기 때문에 오버로딩이 가능하다.
```cpp
#include <iostream>

using namespace std;

class ExConstructor {
public:
    ExConstructor() {
        cout << "ExConstructor() called" << endl;
    }

    ExConstructor(int a) {
        cout << "ExConstructor(int a) called!" << endl;
    }
    ExConstructor(int a, int b) {
        cout << "ExConstructor(int a, int b) called!" << endl;
    }
};

int main(){
    ExConstructor ex1;
    ExConstructor ex2(10);
    ExConstructor ex3(20,10);
}
```
출력
```
ExConstructor() called
ExConstructor(int a) called!
ExConstructor(int a, int b) called!
```
ex1, ex2, ex3의 매개변수 개수에 따라서 호출된 생성자가 다른 것을 알 수 있다.

### 생성자가 없을 시
생성자를 따로 구현하지 않는 경우 C++ 컴파일러에 의해서 `디폴트 생성자`를 알아서 넣어준다. 디폴트 생성자는 인자를 받지도 않고, 아무런 일도 하지 않는다.
```
클래스명() {}
```

## 복사 생성자(Copy Constructor)
`복사 생성자(Copy Constructor)`는 자신과 같은 자료형의 객체를 인수로 전달하는 생성자이다. 

### C와 C++의 초기화 
C와 C++에서는 아래와 같이 변수를 초기화한다. c++은 a,b 두가지 방식 모두 초기화 가능하다.
```cpp
int a(50); // c++ 스타일 초기화
int b = 40; // c 스타일 초기화

cout << "a: " << a << "b: " << b << endl;
```

### 예제
아래 코드에서 `MyClass mc2 = mc1` 을 볼 수 있는데, `mc2.ShowData()` 를 해보면 mc1에 대입해 두었던 값이 복사되어 출력되는 것을 알 수 있다. 

```cpp
#include <iostream>

using namespace std;

class MyClass {
private:
    int num1, num2;
public:
    MyClass(int a, int b){
        num1 = a;
        num2 = b;
    }
    void ShowData() {
        cout << "num1: " << num1 << " num2: " << num2 << endl;
    }
};

int main() {
    MyClass mc1(50,40);
    MyClass mc2 = mc1;

    mc2.ShowData();
    return 0;
}
```
출력
```
num1: 50 num2: 40
```

따로 복사하는 생성자나 함수를 클래스에 구현하지 않았어도 복사가 일어난 이유는, 컴파일러에 의해 `디폴트 복사 생성자`가 자동으로 중간 삽입되기 때문이다. \
디폴트 복사 생성자는 아래와 같이 동작한다.
```cpp
MyClass(int a, int b) {
    num1 = a;
    num2 = b;
}
MyClass(const MyClass& mc) // 디폴트 복사 생성자의 형태
{
    num1 = mc.num1;
    num2 = mc.num2;
}
```
위와 같이 멤버별 복사가 이루어지는 방식을 가르켜 `얕은 복사(Shallow Copy)`라고 한다. 그런데, 얕은 복사에는 문제점이 존재한다. 이를 설명하기 전에 소멸자에 대해 알아보도록 하자.

## 소멸자(Destructor)
생성자가 객체 생성시 호출되는 함수라면, 소멸자는 객체 소멸시 호출되는 함수이다.
### 문법
소멸자는 생성자와 달리 클래스명 앞에 `~`를 붙인다.
```
class 클래스명{
public:
    ~클래스명() 
    {
        // ...
    }
    // ...
}
```
## 예제
```cpp
#include <iostream>

using namespace std;

class ExConstructor
{
public:
    ExConstructor()
    {
        cout << "ExConstructor() called!" << endl;
    }
    ~ExConstructor()
    {
        cout << "~ExConstructor() called!" << endl;
    }
};

int main() 
{
    ExConstructor ec;
    return 0;
}
```
출력
```
ExConstructor() called!
~ExConstructor() called!
```
## 얕은 복사의 문제점
디폴트 복사 생성자에 의해서 값을 복사할 때에 포인터 변수 멤버를 복사하게 되면 메모리의 주소를 동일하게 가리키게 되고, 값 자체는 같은 값을 가리키게 된다. 즉, 얕은 복사의 경우 메모리를 할당하지는 않고 포인터만 복사하는 것이다.
```cpp
#include <iostream>
#include <cstring>

using namespace std;

class MyClass {
private:
    char *str;
public:
    MyClass(const char *aStr) {
        str = new char[strlen(aStr)+1];
        strcpy(str, aStr);
    }
    // MyClass(const MyClass& mc){
    //     str = new char[strlen(mc.str)+1];
    //     strcpy(str, mc.str);
    // }
    ~MyClass() {
        delete []str;
        cout << "~MyClass() called!" << endl;
    }
    void ShowData() {
        cout << "str: " << str << endl;
    }
};

int main() {
    MyClass mc1("MyClass!");
    MyClass mc2 = mc1;

    mc1.ShowData();
    mc2.ShowData();
    return 0;
}
```

결과 (오류)
```
str: MyClass!
str: MyClass!
~MyClass() called!
free(): double free detected in tcache 2
Aborted (core dumped)
```
이처럼 오류가 발생하게 되는데, mc2 객체가 먼저 소멸되고, mc2의 소멸자를 호출한 후 str을 메모리 공간에서 해제시킨다. 이후 mc1의 소멸자가 호출되어 str 포인터가 가리키는 공간을 해제하려고 하는데, 이미 mc2가 해제하였으므로 오류가 발생한다. \
이를 해결하려면 포인터로 참조하는 대상까지 복사하는 `깊은 복사(Deep Copy)`를 사용해야 한다. 이는 MyClass 생성자와 같은 코드를 구현하면 된다.

### 깊은 복사(Deep Copy)
```cpp
#include <iostream>
#include <cstring>

using namespace std;

class MyClass {
private:
    char *str;
public:
    MyClass(const char *aStr) {
        str = new char[strlen(aStr)+1];
        strcpy(str, aStr);
    }
    // 깊은 복사
    MyClass(const MyClass& mc){
        str = new char[strlen(mc.str)+1];
        strcpy(str, mc.str);
    }
    ~MyClass() {
        delete []str;
        cout << "~MyClass() called!" << endl;
    }
    void ShowData() {
        cout << "str: " << str << endl;
    }
};

int main() {
    MyClass mc1("MyClass!");
    MyClass mc2 = mc1;

    mc1.ShowData();
    mc2.ShowData();
    return 0;
}
```
출력
```
str: MyClass!
str: MyClass!
~MyClass() called!
~MyClass() called!
```
이렇게 하면 깊은 복사 과정에서 메모리를 할당하고 값을 복사하기 때문에 오류가 발생하지 않는다.
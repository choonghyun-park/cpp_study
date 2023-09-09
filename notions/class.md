# class
c++의 클래스는 C의 구조체에서 확장된 C++의 구조체의 또다른 이름이다. 즉, 클래스는 변수와 함수 모두 포함할 수 있다. 구조체와 클래스는 기본 접근 제한자가 무엇인지에서 차이가 있고, 나머지는 동일하다. 클래스에서는 기본 접근 제한자가 private이다. 반면에, 구조체의 기본 접근 제한자는 public이다. 이 둘이 동일한 기능을 하는데 두 가지 방법을 남겨둔 이유는, C에서의 하위호완성을 유지하기 위함이다. 

## 문법
```
class 클래스명 {
    // 멤버 변수(상태), 멤버 함수(행동)...
};
```

## 예제
```cpp
#include <iostream>

using namespace std;

class student {
private:
    char * name;
    int age;
    char * hobby;
public:
    void ShowInfo();
    void SetInfo(char * _name, int _age, char * _hobby);
    void Study();
    void Sleep();
};

void student::ShowInfo() {
    cout << "이름: " << name << ", 나이: " << age << ", 취미" << hobby << endl;
}

void student::SetInfo(char * _name,int _age, char * _hobby) {
    name = _name;
    age = _age;
    hobby = _hobby;
}

void student::Study() {
    cout << "공부!" << endl;
}

void student::Sleep() {
    cout << "잠!" << endl;
}

int main() {
    student stu;

    stu.SetInfo("김철수", 16, "컴퓨터 게임");
    stu.ShowInfo();

    while(true){
        stu.Study();
        stu.Sleep();
    }

    return 0;
}
```

출력
```
이름: 김철수, 나이:16, 취미:컴퓨터 게임
공부!
잠!
공부!
잠!
...
```

## 인스턴스(Instance)
인스턴스(Instance)는 객체(Object)의 또다른 표현이다. `인스턴스`는 객체 지향 프로그래밍에서 객체를 실제로 구성한 것, 즉 어떤 메모리 공간에 구현된 실체를 의미한다. \
또한 `객체`는 어떠한 대상이나 개념을 하나의 단위로 묶어내는 것, 프로그램의 독립적인 부품을 의미한다. \
학생(student)란 클래스가 존재하고 초등학교 3학년인 철수와, 초등학교 4학년인 영희가 있다고 할 때 '철수는 학생 클래스의 인스턴스이다.', '철수는 학생 객체이다.' 라고 말할 수 있다. \
객체와 인스턴스는 매우 유사하지만, '객체=인스턴스'는 아니라는 것을 명심하자.
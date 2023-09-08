# struct(구조체)
C++에서는 C에서의 struct에서 확장된 기능을 제공한다.

## struct in C
```c
#include <stdio.h>

struct student {
    int id;
    char *name;
    float percentage;
}; // 구조체 뒤에 세미클론이 와야 함

int main() {
    struct student s = {1,"박충현",90.5};
    printf("아이디: %d \n",s.id);
    printf("이름: %s \n",s.name);
    printf("백분율: %f \n",s.percentage);
    return 0;
}
```
출력
```
아이디: 1 
이름: 박충현 
백분율: 90.500000 
```
C언어에서 구조체 내의 변수는 멤버 `멤버 변수` 혹은 `필드` 등으로 부른다. 또한 구조체 변수를 선언할 때에 struct 키워드를 생략하기 위해서는 typedef 선언을 추가해야 했다. 이는 C++에서 좀 더 편한 방향으로 수정되었다.

## struct in C++
### struct 키워드 생략
```cpp
#include <iostream>

using namespace std;

struct student {
    int id;
    char *name;
    float percentage;
}; // 구조체 뒤에 세미콜론이 와야 함

int main(){
    student s={1,"박충현",90.5};

    cout << "아이디: " << s.id << endl;
    cout << "이름: " << s.name << endl;
    cout << "백분율: " << s.percentage << endl;
    return 0;
}
```

출력
```
아이디: 1
이름: 박충현
백분율: 90.5
```

C++ 구조체에서는 struct 키워드가 생략된 것을 알 수 있다. C에서는 struct 키워드를 생략하려면 typedef으로 선언해 주어야 하지만, C++에서는 그러지 않아도 된다.

### 구조체 내 함수 선언
또한 구조체 내에 함수를 선언하는 것도 가능하다.
```cpp
#include <iostream>

using namespace std;

struct student {
    int id;
    char *name;
    float percentage;

    void Show() {
        cout << "아이디: " << s.id << endl;
        cout << "이름: " << s.name << endl;
        cout << "백분율: " << s.percentage << endl;
    }
}; // 구조체 뒤에 세미콜론이 와야 함

int main(){
    student s={1,"박충현",90.5};

    s.Show();    
    return 0;
}
```
위와 같이, student 구조체 내에서 함수를 선언하는 것이 가능하며, 
외부에서 함수를 호출할 때는 구조체 변수 멤버에 접근하는 것처럼 `.`을 사용하여 접근하면 된다. \

또한 struct 내에서는 선언만 하고, 외부에서 함수를 정의하는 것도 가능하다. \
아래와 같이, `::`을 사용하여 외부에서 함수의 내용을 정의하면 된다.
```cpp
#include <iostream>

using namespace std;

struct student {
    int id;
    char *name;
    float percentage;

    void Show();
}; // 구조체 뒤에 세미콜론이 와야 함

void student::Show() {
    cout << "아이디: " << id << endl;
    cout << "이름: " << name << endl;
    cout << "백분율" << percentage << endl;
}

int main(){
    student s={1,"박충현",90.5};

    s.Show();    
    return 0;
}
```

### 접근 제어 지시자
C언어와 구조체의 또다른 차이점은 `접근 제어 지시자`이다. \
C++에는 `public, private, protected`의 접근 제어 지시자가 존재한다. 만약 접근 제어 지시자가 생략되면, 기본적으로 공용(public) 멤버로 간주한다.
* public : 어디서든 접근 가능
* private : 외부에서 접근 불가능
* protected : 외부에서 접근이 불가능하나, 상속된 파생 클래스에서는 접근이 허용된다. \
예제
```cpp
#include <iostream>

using namespace std;

struct student {
private:
    int id;
    char *name;
    float percentage;

public:
    void Show();
    void SetInfo(int _id, char * _name, float _percentage);
};

void student::Show() {
    cout << "아이디: " << id << endl;
    cout << "이름: " << name << endl;
    cout << "백분율: " << percentage << endl;
}

void student::SetInfo(int _id, char * _name, float _percentage){
    id = _id;
    name = _name;
    percentage = _percentage;
}

int main() {
    student s;
    s.SetInfo(1,"김철수",90.5);
    s.Show();
    return 0;
}
```
결과
```
아이디: 1
이름: 김철수
백분율: 90.5
```
위와 같이, private으로 선언된 id, *name, percentage의 변수는 구조체 외부에서는 접근 불가능하며, SetInfo, Show와 같은 내부 함수 내에서 접근 가능하다. \
혼동될 수 있는 점은, 현재 Show()나 SetInfo()함수도 구조체 외부에서 정의된 것 처럼 착각할 수 있는데, 정의를 외부에서 하였을 뿐, student 라는 구조체 내에서 선언된 함수이기 때문에 private 멤버에 접근 가능한 것이다. python에서 class를 선언할 때에도 private 변수는 class 내부 함수에서 접근 가능했던 것을 기억하자. \
또한 main함수에서 `s.id = 1` 이런 식으로 private 변수에 접근하려고 하면 **private 멤버에 접근할 수 없다**는 내용의 에러가 뜰 것이다. 반대로, public한 변수에 접근하는 경우는 함수 내부든, 외부든 상관없이 가능하다.



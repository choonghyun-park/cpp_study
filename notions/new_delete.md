# new & delete
C에서 malloc과 free에 대해 배운 적이 있다. `malloc`은 **힙 영역에 메모리 공간을 할당할 수 있게 도와주는 함수**이며, `free`는 **malloc 함수 호출 시 할당되었던 메모리 공간을 전부 해제할 수 있게 도와주는 함수**이다. 

## malloc & free in C
아래와 같이, C에서는 malloc을 이용하여 studentScore라는 동적할당 배열을 만들어 사용하였으며, 마지막에 사용을 마치면서 free를 하였다.
```c
#include <stdio.h>
#include <stdlib.h>

int main() {
    int studentNum, totalScore=0;
    int* studentScore;
    int i;

    printf("학생 수를 입력하세요: ");
    scanf("%d",&studentNum);
    studentScore = (int* )malloc(sizeof(int) * studentNum);

    for(i=0;i<studentNum;i++){
        printf("%d번 학생의 점수", i+1);
        scanf("%d",&studentScore[i]);
        totalScore += studentScore[i];
    }

    printf("모든 학생의 평균: %d\n",totalScore/studentNum);
    free(studentScore);
    return 0;
}
```
결과
```
학생 수를 입력하세요: 5
1번 학생의 점수1
2번 학생의 점수2
3번 학생의 점수3
4번 학생의 점수4
5번 학생의 점수5
모든 학생의 평균: 3
```

## new & delete
C에서의 malloc과 free는 C++에서 new와 delete로 대체되었다.
### new
```cpp
// studentScore = (int* )malloc(sizeof(int) * studentNum);
studentScore = new int[studentNum];
```
문법
```
new 자료형[길이];
new 자료형(초기화할 값); // 자료형을 할당하고, 그 값으로 초기화 한다.
```
예시
```cpp
double* ptr1 = new double[3];   // double 3칸짜리 배열
float* ptr2 = new float[10];    // float 10칸짜리 배열
int* ptr3 = new int(3);         // int를 할당하고, 그 값을 3으로 초기화
```
혼동될 수 있는데, 여기서는 3, 10과 같이 상수를 이용해서 초기화 했지만, 저 자리에 변수가 들어갈 수 있기 때문에 동적할당을 대체하는 것이다.\
C++의 배열은 STL 라이브러리에 존재하는 vector도 있는데, vector는 할당 이후 크기를 변경할 수 있지만, new로 선언한 경우 크기를 바꾸는 것은 불가능하다. 
### delete
```cpp
// free(studentScore);
delete []studentScore; 
```
문법
```
delete 포인터;      // 포인터가 단순한 자료형인 객체를 가리키는 경우
delete []포인터     // 포인터가 객체 배열을 가리키는 경우
```

예시
```cpp
int* ptr1 = new int(3);
double* ptr2 = new double[3];
float* ptr3 = new float[10];

...

delete ptr1;
delete []ptr2;
delete []ptr3;
```

###  new & delete example
```cpp
#include <iostream>

using namespace std;
int main() {
    int studentNum, totalScore = 0;
    int* studentScore;
    int i;

    cout << "학생 수를 입력하세요: ";
    cin >> studentNum;
    studentScore = new int[studentNum];

    for(i=0;i<studentNum;i++){
        cout << i+1 << "번 학생의 점수: ";
        cin >> studentScore[i];
        totalScore += studentScore[i];
    }

    cout << "모든 학생의 평균: " << totalScore / studentNum << endl;
    delete []studentScore;
    return 0;
}
```
결과
```
학생 수를 입력하세요: 5
1번 학생의 점수: 1
2번 학생의 점수: 2
3번 학생의 점수: 3
4번 학생의 점수: 4
5번 학생의 점수: 5
모든 학생의 평균: 3
```
## malloc&free 와 new&delete 차이점
|                                        malloc/free                                       |                                        new/delete                                        |
|:----------------------------------------------------------------------------------------:|:----------------------------------------------------------------------------------------:|
|                                           함수                                           |                                          연산자                                          |
|                           초기값을 원하는 값으로 할당할 수 없음                          |                           할당과 초기화를 한꺼번에 할 수 있음                            |
|                        필요한 크기는 바이트 단위로 지정해주어야 함                       |                           필요한 크기는 컴파일러에 의해 계산됨                           |
|                      할당된 메모리는 realloc을 통해 크기 변경이 가능                     | 재할당이 불가능함 / STL의 컨테이너 라이브러리인 vector를 사용하는 것이 대안이 될 수 있음 |
|                                할당 실패 시 NULL을 반환함                                |                          할당 실패 시 std::bad_alloc 예외를 던짐                         |
| 메모리 할당/해제에 초점이 맞추어져 있기 때문에 객체 생성/제거 시 생성자/소멸자 호출 안됨 |                           객체 생성/제거 시 생성자/소멸자 호출                           |


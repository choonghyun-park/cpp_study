# Pair
STL pair의 기본 예제를 정리한 페이지입니다.\
pair는 두 객체를 하나의 객체로 취급 할 수 있게 묶어주는 클래스입니다. 즉, 데이터 '쌍' 을 표현할 때 사용.

### header
```cpp
#include <utility>
```
pair만을 사용하려면 utilitiy를 선언하면 되지만, `vector, algorithm` 헤더에 pair가 포함되어 있기 때문에 이들 헤더로 대체해도 된다.
### 생성
```cpp
pair<int,int> p;
pair<int,double> p2;
```
### 값 읽기
```cpp
p.first
// p의 첫번째 인자를 반환
p.second
// p의 두번째 인자를 반환
make_pair(1,2.1)
// p.first = 1, p.second = 2.1 인 pair 반환
```
### 값 비교
pair는 `==, !=, <, >, <=, >=` 의 operator에 의한 값 비교가 가능하다. \
이때, first 값을 먼저 비교하고, 이 값이 같다면 second 값을 비교한다.

```cpp
void compare(pair<int, int> a, pair<int, int> b)
{
    if (a > b)
        cout << "첫 번째 인자가 더 큼." << endl;
    else
        cout << "두 번째 인자가 더 큼." << endl<<endl;
}
```
### sort를 이용한 정렬
sort 함수를 사용해 정렬할 때도 first를 먼저 비교하고, 이 값이 같으면 second 값을 가지고 정렬한다.
```cpp
sort(q.begin(), q.end(), compare); 
//sort를 이용해서 정렬
```

## Reference
* [pair 클래스 사용 방법](https://ya-ya.tistory.com/91)
* [pair 클래스 정리 및 예제](https://blockdmask.tistory.com/64)
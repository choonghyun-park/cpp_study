# vector
배열과 비슷하지만, 메모리를 잡아주지 않아도 된다.
### Header
```cpp
#include <vector>
```

### 생성
```cpp
vector<int> v1;
// 빈 벡터 생성
vector<int> v2(3);
// default값 0으로 초기화된 크기 3의 벡터
// v2 = [0,0,0]
vector<int> v3(3,1);
// 1로 초기화된 크기 3의 벡터
// v3 = [1,1,1]
vector<int> v4(v3);
// v3를 복사해서 생성
// v4 = [1,1,1]
vector<int> v5 = {1,2,3,4,5};
// v5 = [1,2,3,4,5]
```
### 할당(assign)
```cpp
v.assign(5,2);
// v = [2,2,2,2,2]
```
### 원소 참조
```cpp
v.at(index);
v[index];
// index의 원소를 참조
v.front();
// 첫 번째 원소 참조
v.back();
// 마지막 원소 참조
```
### 원소 추가
```cpp
v.push_back(item);
// 마지막 원소 뒤에 item 삽입

v.insert(index, item);
// index 위치에 item 삽입
// 삽입한 곳의 iterator 반환

v.insert(index, count, item);
// index 위치에 count 개수만큼 item 삽입
```
### 원소 제거
```cpp
v.clear();
//모든 원소 제거
v.pop_back();
// 마지막 원소를 제거
v.erase(iterator);
//iterator가 위치한 원소를 제거
```
### 크기 연산
```cpp
v.size();
//원소의 개수를 반환
v.empty()
// size가 0이면 true 반환
```

## Reference
[C++ STL 정리](https://daekyojeong.github.io/posts/languageCpp1/)
# set & multiset
STL set, multiset의 기본 예제를 정리한 페이지입니다.
### header
```cpp
#include <set>
```
### 생성
```cpp
set<int> s;
set<pair<int,int>> s;
multiset<int> s;
multiset<vector<int>> s;
```
### 추가
```cpp
s.insert(item);
// item 삽입
```
### 제거
```cpp
s.clear();
// 모든 원소 제거
s.erase(iter);
// iter이 가르키는 위치의 원소를 제거
s.erase(start, end);
// [start, end) 범위의 원소 모두 제거
```
### 값 읽기
```cpp
s.find(item);
// item을 가르키는 iter 반환, 없으면 s.end() 반환
s.upper_bound(item);
// item이 끝나는 구간의 iter 반환
s.lower_bound(item);
// item이 시작하는 구간의 iter 반환
s.equal_range(item);
// 시작하는 구간과 끝나는 구간의 iter pair 객체 반환
```
### 원소 개수
```cpp
s.empty();
// s가 비어있는지 확인
s.count(item);
// item의 개수 반환
s.size();
// s의 원소 개수 반환
```
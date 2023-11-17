# map & multimap
STL map, multimap의 기본 예제를 정리한 페이지입니다.
### header
```cpp
#include <map>
```
### 생성
```cpp
map<int,int> m;
map<string,int> m;
multimap<int> m;
multimap<vector<int>> m;
```
### 추가
```cpp
m[key] = val;
// key가 가르키는 위치에 val 삽입
m.insert(item);
// item은 pair 객체
```
### 제거
```cpp
m.clear();
// 모든 원소 제거
m.erase(iter);
// iter이 가르키는 위치의 원소를 제거
m.erase(start, end);
// [start, end) 범위의 원소 모두 제거
```
### 값 읽기
```cpp
m.find(item);
// item을 가르키는 iter 반환, 없으면 s.end() 반환
m.upper_bound(item);
// item이 끝나는 구간의 iter 반환
m.lower_bound(item);
// item이 시작하는 구간의 iter 반환
m.equal_range(item);
// 시작하는 구간과 끝나는 구간의 iter pair 객체 반환
```
### 원소 개수
```cpp
m.empty();
// s가 비어있는지 확인
m.count(item);
// item의 개수 반환
m.size();
// s의 원소 개수 반환
```
# Priority Queue
Priority Queue의 기본 예제를 정리한 페이지입니다.

### header
```cpp
#include <queue>
```
### 생성
```cpp
priority_queue<int> pq;
//내림차순 less<> 기반
```
### 추가
```cpp
pq.push(item);
// item 삽입
```
### 제거
```cpp
pq.pop();
// top이 가리키는 원소 제거
```
### 값 읽기
```cpp
pq.top();
// 가장 위에 있는 원소 반환
```
### 원소 개수
```cpp
pq.size();
// 원소 개수 반환
pq.empty();
// 비어있으면 true 반환
```
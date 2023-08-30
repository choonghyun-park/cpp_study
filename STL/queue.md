# Queue
STL queue에 대한 기본 예제를 정리한 페이지입니다.

### Header
```cpp
#include <queue>
```
### 생성
```cpp
queue<int> q;
```
### 추가
```cpp
q.push(item);
// item 삽입
```
### 제거
```cpp
q.pop();
// 가장 앞의 원소 제거
```
### 값 읽기
```cpp
q.front();
// 가장 앞에 있는 원소 반환
```
### 원소 개수
```cpp
q.size();
// 원소 개수 반환
q.empty();
// 비어있으면 true 반환
```

# Deque
STL Deque의 기본 예제를 정리한 페이지입니다.

### header
```cpp
#include <deque>
```

### 생성
```cpp
deque<int> dq;
```

### 추가
```cpp
dq.push_front(item);
// 첫 번째 원소 앞에 item 삽입
dq.push_back(item);
// 마지막 원소 뒤에 item 삽입
dq.insert(index, item);
// index 위치에 item 삽입
dq.insert(index, count, item);
// index 위치에 item을 count번 삽입
```

### 제거
```cpp
dq.pop_front();
// 첫 번째 원소 제거
dq.pop_back();
// 마지막 원소 제거
dq.clear();
// 모든 원소 제거
dq.erase(iterator);
//iterator가 가르키는 원소 제거
```

### 값 읽기
```cpp
dq.at(index);
dq[index];
// index 번째 원소 참조
dq.front();
// 첫 번째 원소 참조
dq.back();
// 마지막 원소 참조
```

### 원소 개수
```cpp
dq.size();
//원소 개수 반환
dq.empty();
//비어있으면 true 반환
```
# Stack
STL stack에 대한 기본 예제입니다.

### header
```cpp
#include <stack>
```

### 생성
```cpp
stack<int> st;
```

### 추가
```cpp
st.push(item);
// item 삽입
```

### 제거
```cpp
st.pop();
// top이 가르키는 원소 제거
```

### 값 읽기
```cpp
st.top();
// 가장 위에 있는 원소 반환
```

### 원소 개수
```cpp
st.size();
// 원소 개수 반환
st.empty();
// 비어있으면 true 반환
```

# multimap
STL multimap의 기본 예제를 정리한 페이지입니다. \

### map과 multimap의 차이점
map과 multimap의 차이점은 `map`은 **중복 key를 허용하지 않지만**, `multimap`은 **중복 key를 허용**하는 것이다. 개념상 차이점은 이것이 유일하며, 사용하는 메소드나 문법도 서로 거의 유사하나, 조금 다른 것들도 있다.\
대표적으로, multimap은 [] 연산자를 지원하지 않는다. \

### header
multimap은 `<map>` 헤더에 포함되어 있다.
```cpp
#include <map>
```

### 생성
```cpp
multimap<int> mm;
multimap<vector<int>> mm;
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
m[key];
// key에 해당하는 value를 반환.
m.find(key);
// key을 가르키는 iter 반환, 없으면 s.end() 반환
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

## map과 multimap의 차이점

### 중복 키를 


## Reference
* [C++ STL 정리](https://daekyojeong.github.io/posts/languageCpp1/)
* [map, multimap 차이](https://program-rest-area.tistory.com/108)
* [multimap 주요 인터페이스 특징](https://program-rest-area.tistory.com/108)
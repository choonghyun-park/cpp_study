# multimap
STL multimap의 기본 예제를 정리한 페이지입니다.

### map과 multimap의 차이점
map과 multimap의 차이점은 `map`은 **중복 key를 허용하지 않지만**, `multimap`은 **중복 key를 허용**하는 것이다. 개념상 차이점은 이것이 유일하며, 사용하는 메소드나 문법도 서로 거의 유사하나, 조금 다른 것들도 있다.\
대표적으로, multimap은 [] 연산자를 지원하지 않는다.

### header
multimap은 `<map>` 헤더에 포함되어 있다.
```cpp
#include <map>
```

## 생성
```cpp
multimap<int,int> mm1;
multimap<int,vector<int>> mm2;
```

## 추가
multimap은 `[]` 연산자를 사용하여 멤버를 추가하는 것이 불가능하다. key가 유일하지 않기 때문에 pair 객체 단위로 추가해 주어야 하는 것으로 보인다.
```cpp
m.insert(item);
// item은 pair 객체
```

### 예시
```cpp
multimap<int,string> mm;

mm.insert(make_pair(1,"one"));
mm.insert(make_pair(2,"two"));

cout << mm.find(1)->first << endl;
cout << mm.find(2)->second << endl;
```

## 제거
```cpp
m.clear();
// 모든 원소 제거
m.erase(iter);
// iter이 가르키는 위치의 원소를 제거
m.erase(start, end);
// [start, end) 범위의 원소 모두 제거
```

## 값 읽기
```cpp
m.find(key);
// key을 가르키는 iter 반환, 없으면 s.end() 반환
m.upper_bound(item);
// item이 끝나는 구간의 iter 반환
m.lower_bound(item);
// item이 시작하는 구간의 iter 반환
m.equal_range(item);
// 시작하는 구간과 끝나는 구간의 iter pair 객체 반환
```

## 원소 개수
```cpp
m.empty();
// s가 비어있는지 확인
m.count(item);
// item의 개수 반환
m.size();
// s의 원소 개수 반환
```

## Reference
* [C++ STL 정리](https://daekyojeong.github.io/posts/languageCpp1/)
* [map, multimap 차이](https://program-rest-area.tistory.com/108)
* [multimap 주요 인터페이스 특징](https://program-rest-area.tistory.com/108)
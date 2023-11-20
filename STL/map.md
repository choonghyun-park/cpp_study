# map
STL map의 기본 예제를 정리한 페이지입니다. 
### term
* `item` : map을 선언할 때 지정한 데이터 형식과 같게 생성된 pair 객체를 의미한다.
* 다르게 말하면, map은 pair를 담은 컨테이너이며, 다만, 중복 key를 허용하지 않는다.

## header
```cpp
#include <map>
```

## 생성
```cpp
map<int,int> m;
map<string,int> m;
```

## 추가
### 문법
```cpp
m[key] = val;       // key가 가르키는 위치에 val 삽입
m.insert(item);     // item은 pair 객체이다.
```
### 예제
```cpp
map<int,string> m;
m[1] = "one";
m[2] = "two";
cout << m[1] << endl; 
cout << m[2] << endl;
```
출력
```
one
two
```

## 값 읽기
```cpp
m[key];
// key에 해당하는 value를 반환.
m.find(key);
// key을 가르키는 iterator 반환, 없으면 s.end() 반환
m.upper_bound(item);
// item이 끝나는 구간의 iterator 반환
m.lower_bound(item);
// item이 시작하는 구간의 iterator 반환
m.equal_range(item);
// 시작하는 구간과 끝나는 구간의 iterator pair 객체 반환
```

### find() 예시
find() 함수는 매개변수인 key에 해당하는 iterator를 반환하며, 이 iterator는 pair 객체를 가리킨다. 따라서 `it->first` 와 `it->second` 형태로 멤버 변수에 접근 가능하다. \
주의할 점은, `*it` 로 **바로 iterator가 가리키는 값을 호출하면 안된다**는 것이다. it는 pair 객체를 가리키고 있기 때문에, 이렇게 하면 오류가 발생한다.
```cpp
map<int,string> m;
m[1] = "one";
m[2] = "two";
cout << m[1] << endl; 
cout << m[2] << endl;

auto it = m.find(1);        // iterator 를 선언하여 접근
cout << it->first << endl;  // iterator는 pair 객체의 포인터

cout << m.find(2)->second << endl; // iterator를 선언하여 할당하지 않고 바로 접근해도 된다.
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


## 원소 개수
```cpp
m.empty();
// s가 비어있는지 확인
m.count(item);
// item의 개수 반환
m.size();
// s의 원소 개수 반환
```

## 정렬
map은 기본적으로 key를 기준으로 오름차순 정렬되어 있다.

### key 기준으로 내림차순 정렬
TODO

### value 기준으로 정렬
과정
1. map을 vector로 이동
2. vector를 second 기준으로 정렬
TODO

## Tips
* pair는 map 해더에 기본 내장되어 있다. pair는 기본적으로 utility 해더에 포함되어 있으며, vector, algorithm 해더 등에도 내장되어 있다.

## TODO
* map에 저장된 item은 key 기준 오름차순으로 자동 정렬되는지? 이때 해시함수를 사용하여 정려하는 것인지?



## Reference
* [C++ STL 정리](https://daekyojeong.github.io/posts/languageCpp1/)
* [map, multimap 차이](https://program-rest-area.tistory.com/108)
* [upper_bound, lower_bound 포스팅](https://chanhuiseok.github.io/posts/algo-55/)
* [map 정렬하기](https://unluckyjung.github.io/cpp/2020/05/07/Sort_map_by_value/)
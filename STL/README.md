# STL
`STL(Standard Template Library)`는 C++을 위한 표준 라이브러리 템플릿이다.이것은 `알고리즘, 컨테이너, 함수자, 반복자` 라고 불리는 4가지 구성요소를 제공한다.

## 1. 컨테이너(Container)
컨테이너란 기본적인 자료형과 유저가 정의한 자료형을 담는 일종의 자료구조이다. 컨테이너에는 `시퀀스 컨테이너`, `연관 컨테이너` 가 포함된다. 

### 간단한 컨테이너
* [pair](./pair.md)

### 시퀀스 컨테이너(Sequence Container)
일반적인 자료구조와 동일한 형태이다.
* [vector](./vector.md) 
* [deque](./deque.md)
* list
* slist

### 연관 컨테이너(Accosiated array)
일정한 규칙에 따라 자료를 조직화하여 저장한다.
* [set/multiset](./set_multiset.md) 
    * multiset은 set과 같지만 중복 요소를 허용
* [map/multimap](./map_multimap.md) 
    * multimap은 map과 같지만 중복 키를 허용
* hash_set
* hash_multiset
* hash_map
* hash_multimap

### 컨테이너 어뎁터(Container Adaptor)
시퀀스 컨테이너를 변형시켜 stack, queue, priority queue 형태로 저장
* [queue](./queue.md)
* [priority queue](./priority_queue.md)
* [stack](./stack.md)

## 2. 알고리즘(Algorithm)
알고리즘은 `정렬, 삭제, 검색, 연산` 등의 활동을 수행하는 작업을 정의해 놓은 템플릿 함수이다.
* sort
* find
* transform
* for_each
* generate
* binary_search

## 3. 반복자(Iterator)
반복자는 컨테이너 원소를 순회하는 방법을 추상화한 객체들을 뜻한다.
* input iterators : 값들의 시퀀스를 읽는 데 사용
* output iterators : 값들의 시퀀스를 쓰는 데 사용
* forward iterators : 읽고 쓸 수 있으며 앞으로 움직일 수 있다.
* bidirectional iterators : forward iterators의 특징을 가지며 앞뒤로 다 움직일 수 있다.
* random access iterators : 자유롭게 움직일 수 있습니다.

## 4. 함수자(Functor)
STL은 함수 호출 연산자(Operator)를 오버로드하는 클래스들을 포함한다. 이러한 클래스들의 인스턴스들은 함수자 또는 함수 객체라고 한다.


## Reference
* [STL wiki](https://ko.wikipedia.org/wiki/%ED%91%9C%EC%A4%80_%ED%85%9C%ED%94%8C%EB%A6%BF_%EB%9D%BC%EC%9D%B4%EB%B8%8C%EB%9F%AC%EB%A6%AC)
* [STL이 뭘까?](https://ssocoit.tistory.com/24)
* [C++ STL 정리](https://daekyojeong.github.io/posts/languageCpp1/)
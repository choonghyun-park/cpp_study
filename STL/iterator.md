# iterator
iterator는 일종의 포인터이며, STL의 클래스 내부에 만들어져 있는 하나의 클래스이다. iterator는 STL 안의 데이터를 가리키는 역할을 한다. \
기존의 포인터가 있지만, iterator를 굳이 도입하는 이유는, STL에서 통일된 포인터 개념을 도입하기 위해서이다. 또한, 일반적인 포인터로는 STL 내의 데이터에 접근하기 쉽지 않다. 

## begin(), end()
벡터 안에 데이터는 리스트의 형태로 순서를 가지고 저장되어 있으며, iterator를 사용하여 데이터에 접근 가능하다. 
* begin() : 리스트의 시작 주소를 리턴한다. 즉, 첫 번째 값의 위치이다.
* end() : 리스트의 끝 주소를 리턴한다. 이는 마지막 값보다 한칸 뒤의 주소를 의미한다.

## 선언
### 문법
```
vector<자료형>::iterator 이터레이터명;
```
선언한 iterator 변수에 실제 iterator 객체를 할당할 때는, 서로 클래스 및 자료형이 일치해야 한다. \
iterator는 위 문법에서도 확인할 수 있듯이, vector와 같이 STL 클래스 내에서 정의된 하나의 클래스이다. 참고로, `::` 는 어떤 클래스에 소속되어 있는지를 의미한다.

### 예시
```cpp
vector<int> v;
v.push_back(1);
v.push_back(2);
v.push_back(3);

vector<int>::iterator it;
for (it=v.begin;it!=v.end();it++){
    cout << *it << endl;
}
```
### 연산자
하단의 반복문에서 `it++`를 보면,연산자를 사용한 것을 볼 수 있는데, 리스트에서 
* `++`는 뒤에 칸으로의 이동, `--`는 반대방향
* `+`는 몇 칸 뒤, `-`는 반대 방향
으로 iterator가 움직이게 된다. \
또한, `*` 연산자를 iterator 변수 앞에 붙이면 현재 가리키는 값을 반환하게 된다.



## Reference
* [iterator 간단 설명 포스팅](https://blog.naver.com/PostView.nhn?blogId=kks227&logNo=60208809639)
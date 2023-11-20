# Range based for loop 
`범위기반 for 문(Range based for loop)`은 시작과 끝점을 알려주지 않아도, 알아서 처음부터 끝까지 순회를 해주는 반복문이다.

## 문법
```cpp
for (데이터 타입 elem:데이터 리스트)
{
    // elem를 사용해 하고싶은 것들
}
```

### 예제
```cpp
int arr[5] = {1,2,3,4,5};

// 기존의 for문
for (int i=0;i<sizeof(arr)/sizeof(int);i++){
    cout << arr[i] << ' ';
}
cout << endl;

// 범위기반 for문
for (int elem:arr){
    cout << elem << ' ';
}
cout << endl;
```
출력
```
1 2 3 4 5 
1 2 3 4 5
```

### vector도 똑같다.
for문의 경우 iterator로 접근해야 하는 vector 역시 범위기반 for문에서는 일반적인 array와 같이 작성하면 된다.
```cpp
vector<int> vec = {1,2,3,4,5};
// 일반적인 for문
for (auto it=vec.begin();it!=vec.end();it++){
    cout << *it << ' ';
}
cout << endl;
// 범위기반 for문
for (int elem:vec){
    cout << elem << ' ';
}
cout << endl;
``` 
출력
```
1 2 3 4 5 
1 2 3 4 5 
```

## 한계점
* 범위기반 for문은 일반적인 for문을 완전히 대체하지는 못한다. 범위를 지정할 수 없기 때문.
* element만 알 수 있을 뿐, index는 알 수 없다. 
    * 전혀 못하는 건 아니지만, 코드가 상당히 더러워진다.
* arr의 원소를 하나씩 복사하여 elem로 가져오는 것이기 때문에, elem의 값을 바꿔도 원래 arr의 값은 바뀌지 않는다. 즉, **range based for문 내부에서는 배열의 요소를 변경할 수 없다.**

## Reference, Const Reference
앞서 소개한 것처럼, 범위기반 for문은 복사 비용이 발생한다.
### 복사 비용
```cpp
elem = arr[0];
elem = arr[1];
elem = arr[2];
...
```
이런 식으로 매 반복문마다 복사를 하므로 `복사비용`이 들어가며, 원래 값을 바꾸지 못한다.

### Reference
복사비용 없이 데이터를 바로 참조(Reference)해서 쓸 수 있다. 데이터 타입 뒤에 `&`를 붙여주면 참조해서 사용하는 것으로 바뀌며, 복사비용이 없어지고, 원래의 값도 바꿀 수 있게 된다. \
문법
```
for (데이터타입& 변수이름:데이터리스트)
```
예제
```cpp
for (int& elem:arr){
    elem += 1;
    cout << elem << endl
}
```
### Const reference
값은 참조하여 쓰지만, 원래 값은 바뀌지 않기를 바라면 데이터 타입 앞에 const를 붙여주면 된다. 이렇게 하면, 데이터 변경이 불가능해진다. 따라서 참조하기 때문에 복사비용은 들지 않고, 데이터가 변하지 않는다는 것을 보장할 수 있다. \
문법
```
for(const 데이터타입& 변수이름:데이터리스트)
```
예제
```cpp
for (const int& elem:arr){
    cout << elem << endl;
}
```


## Reference
[Blockdmask 범위기반 for문](https://blockdmask.tistory.com/319)
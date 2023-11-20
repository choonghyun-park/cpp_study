# permutation
permutation 기본 예제를 정리한 페이지입니다.

## next_permutation을 사용한 nPn
```cpp
#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    // nPn
    int n = 5; 

    vector<int> vec;

    for (int i=0;i<n;i++){
        vec.push_back(i);
    }

    int no_of_case = 0;

    do{
        for (auto it=vec.begin();it!=vec.end();it++){
            cout << *it << ' ';
        }
        cout << endl;
        no_of_case++;
    }while(next_permutation(vec.begin(),vec.end()));

    cout << "No of case : " << no_of_case << endl;
}
```

## nPr
next_permutation을 사용해서 구현하려면 nCr으로 케이스를 만들고, 해당 경우에서 한번 더 next_permutation 하는 수밖에 없을 듯 하다. \
그렇지 않으면, 자료구조를 사용해서 구현할 수 있는데, dfs와 swap을 사용하여 구현한 것들이 있다. \
* 참고자료는 [여기](https://chanho0912.tistory.com/15)


## next_permutation
### 해더
```cpp
#include <algorithm>
```

### 함수 설명
* `next_permutation` : 현재 나와 있는 수열에서 인자로 넘어간 범위에 해당하는 다음 순열을 구하고 true를 반환한다. 다음 순열이 없다면(다음에 나온 순열이 순서상 이전 순열보다 작다면) false를 반환한다.
* `prev_permutation` : 현재 나와 있는 수열에서 인자로 넘어간 범위에 해당하는 이전 순열을 구하고 true를 반환한다. 이전 순열이 없다면(다음에 나온 순열이 순서상 이전 순열보다 크다면) false를 반환.

### 사용법
1-2-3-4 의 next_permutation은 1-2-4-3이며, 배열의 값이 바뀐 후 true가 반환된다.

### 문법
```cpp
// 첫번째 인자가 구하고자 하는 순열의 시작, 두번째 인자가 순열의 끝
bool next_permutation (BidirectionalIterator first, BidirectionalIterator last);

// 아래처럼 직접 비교함수를 넣어줘도 됩니다.
bool next_permutation (BidirectionalIterator first, BidirectionalIterator last, Compare comp);
```

## Reference
* [next_permutation으로 permutation, combination 구현](https://mjmjmj98.tistory.com/38)
* [C++에서 next_permutation을 통해 순열 구하기](https://twpower.github.io/82-next_permutation-and-prev_permutation)


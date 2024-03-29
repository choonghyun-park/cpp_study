# Combination
c++ 에서 Combination 을 활용하는 방법을 정리한 페이지입니다.

## next_permutation를 사용한 nCr
```cpp
#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    // nCr
    int n,r;
    n = 5;
    r = 3;

    vector<int> vec;
    for(int i=0; i<n; i++){
		vec.push_back(i+1);
	}

    vector<int> idx;
	for(int i=0; i<n-r; i++){
		idx.push_back(0);
	}
	for(int i=0; i<r; i++){
		idx.push_back(1);
	}

    int no_of_case = 0;

    do{
		// 출력
		for(int i=0; i<n; i++){
			if(idx[i] == 1){
				cout << vec[i] << ' ';
			}
		}
        cout << endl;
        no_of_case++;
	}while(next_permutation(idx.begin(), idx.end()));

    cout << "no of case : " << no_of_case << endl;
}
```

## 자료구조 기반 구현
```cpp
#include <iostream>
#include <vector>
using namespace std;

void Combination(vector<int> arr,vector<int> comb, int r, int index, int depth){
    if (r==0) {
        // do what you want with comb vector
        // example
        for (auto it=comb.begin();it!=comb.end();it++){
            cout << *it << " ";
        }
        cout << endl;
    }
    else if(depth==arr.size()){ // depth보다 크게 탐색하는 경우 제외
        return;
    }
    else {
        // arr[depth]를 뽑는 경우
        comb[index] = arr[depth];
        Combination(arr,comb,r-1,index+1,depth+1);
        // arr[depth]를 뽑지 않는 경우
        Combination(arr,comb,r,index,depth+1);
    }
}


int main() {
    vector<int> arr = {1,2,3,4,5};
    int r=3;
    vector<int> comb(r); // {0,0,0}

    Combination(arr,comb,r,0,0);
}

```
### Result
5C3
arr = {1,2,3,4,5}
r = 3
```
1 2 3 
1 2 4 
1 2 5 
1 3 4 
1 3 5 
1 4 5 
2 3 4 
2 3 5 
2 4 5 
3 4 5 
```

## Reference
* [조합(Combination) 구현하기](https://ansohxxn.github.io/algorithm/combination/)
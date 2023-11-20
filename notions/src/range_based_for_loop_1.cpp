#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
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
}
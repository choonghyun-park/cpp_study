#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    int T;
    int nums[10];
    int results[1000];
    cin >> T;
    for (int i=0;i<T;i++){
        for (int j=0;j<10;j++){
            cin >> nums[j];
        }
        sort(nums,nums+10);
        results[i] = nums[7];
    }

    for (int i=0;i<T;i++){
        cout << results[i] << endl;
    }

}
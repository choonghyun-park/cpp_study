#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    int n;
    vector<int> nums;
    cin >> n;
    while(n>0){
        nums.push_back(n%10);
        n = n/10;
    }
    sort(rbegin(nums),rend(nums));
    for (auto it=nums.begin();it!=nums.end();it++){
        cout << *it;
    }
    cout << endl;
}
#include <iostream>
#include <vector>
using namespace std;

int main() {
    int K;
    cin >> K;
    vector<int> nums;
    int num;
    for (int i=0;i<K;i++){
        cin >> num;
        if (num==0){
            if (!nums.empty()){
                nums.pop_back();
            }
        }
        else{
            nums.push_back(num);
        }
    }
    int sum=0;
    for (auto it=nums.begin();it<nums.end();it++){
        sum+= *it;
    }
    cout << sum << endl;
}
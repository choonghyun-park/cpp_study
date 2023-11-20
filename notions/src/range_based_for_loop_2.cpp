#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    vector<int> vec = {1,2,3,4,5};
    
    for (auto it=vec.begin();it!=vec.end();it++){
        cout << *it << ' ';
    }
    cout << endl;

    for (int elem:vec){
        cout << elem << ' ';
    }
    cout << endl;
}
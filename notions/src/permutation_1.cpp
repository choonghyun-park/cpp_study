#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    int n,r; // nPr
    n = 5;
    r = 3

    vector<int> vec;
    vector<int> 

    for (int i=0;i<n;i++){
        vec.push_back(i);
    }



    do{
        for (auto it=vec.begin();it!=vec.end();it++){
            cout << *it << ' ';
        }
        cout << endl;
    }while(next_permutation(vec.begin(),vec.end()));


}


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


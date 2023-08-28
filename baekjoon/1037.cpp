#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int main() {
    int N,value;
    cin >> N;
    vector<int> v;
    for (int i=0;i<N;i++){
        cin>>value;
        v.push_back(value);
    }
    sort(begin(v),end(v));
    cout << (v.front()*v.back()) << endl;
}
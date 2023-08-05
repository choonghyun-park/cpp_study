/*
[input]
13 = 1101
[output]
0 2 3
*/

#include <iostream>
#include <vector>
using namespace std;

int main() {
    int T;
    cin >> T;
    for (int i=0;i<T;i++) {
        int input;
        cin >> input;
        vector<int> V;
        while(input>0) {
            int nmj = input%2;
            input = input/2;
            V.push_back(nmj);
            
        }

        for (auto it=V.begin();it!=V.end();it++){
            if (*it==1){
                int idx = it - V.begin();
                cout << idx << ' ';
            }
        }
    }
}
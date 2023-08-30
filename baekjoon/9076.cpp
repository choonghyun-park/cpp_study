#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    int T;
    cin >> T;
    vector<int> rets;
    for (int i=0;i<T;i++){
        vector<int> scores(5);
        for (int j=0;j<5;j++){
            cin >> scores[j];
        }
        sort(scores.begin(),scores.end());
        if (scores[3]-scores[1] >= 4){
            rets.push_back(-1);
        }
        else {
            int sum=0;
            for (int j=1;j<4;j++){
                sum+=scores[j];
            }
            rets.push_back(sum);
        }

    }
    

    for (int i=0;i<T;i++){
        if (rets[i]==-1){
            cout << "KIN" << endl;
        }
        else{
            cout << rets[i] << endl;
        }
    }
}
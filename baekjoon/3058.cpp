#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    int T;
    cin >> T;
    vector<pair<int,int>> results;
    
    for (int i=0;i<T;i++){
        int num;
        vector<int> even;
        for (int j=0;j<7;j++){
            cin >> num;
            if (num%2==0){
                even.push_back(num);
            }
        }
        int sum=0;
        for (auto it=even.begin();it!=even.end();it++){
            sum+=*it;
        }
        sort(even.begin(),even.end());
        results.push_back(make_pair(sum,even[0]));
    }

    for (auto it=results.begin();it!=results.end();it++){
        auto r = *it;
        cout << r.first << ' ' << r.second << endl;
    }
}
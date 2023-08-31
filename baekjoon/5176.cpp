#include <iostream>
#include <set>
#include <vector>
using namespace std;

int main(){
    int T,P,M;
    cin >> T;
    vector<int> results;
    for (int i=0;i<T;i++){
        cin >> P;
        cin >> M;
        set<int> seats;
        int seat;
        for (int j=0;j<P;j++){
            cin >> seat;
            seats.insert(seat);
        }
        int remain = P - seats.size();
        results.push_back(remain);
    }
    for (int i=0;i<T;i++){
        cout << results[i] << endl;
    }
}
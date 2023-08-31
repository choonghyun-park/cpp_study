#include <iostream>
#include <vector>
using namespace std;

int main() {
    int N,K;
    cin >> N;
    cin >> K;
    vector<int> A;
    int num;
    for (int i=0;i<N;i++){
        cin >> num;
        A.push_back(num);
    }
    int cnt=0;
    for (int i=N-1;i>=0;i--){
        int coin = A[i];
        cnt += K/coin;
        K %= coin;
    }
    cout << cnt << endl;
}
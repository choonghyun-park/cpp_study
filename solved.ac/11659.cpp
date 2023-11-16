#include <iostream>
#include <vector>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cout.tie(NULL);
    cin.tie(NULL);

    int N,M;
    cin >> N >> M;
    /*
    N : 수의 개수
    M : 합을 구해야 하는 횟수
    */
    vector<int> inputs;
    vector<int> results;
    vector<int> sums;
    int sum=0;
    sums.push_back(sum);
    for (int i=0;i<N;i++){
        int num;
        cin >> num;
        inputs.push_back(num);
        sum += num;
        sums.push_back(sum);
    }

    for (int a=0;a<M;a++){
        int i,j;
        cin >> i >> j;
        int local_sum=sums[j]-sums[i-1];
        results.push_back(local_sum);
    }

    for (auto it=results.begin();it!=results.end();it++){
        cout << *it << '\n';
    }
    return 0;
}
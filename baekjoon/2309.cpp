#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

void Combination(vector<int>,vector<int>,int,int,int);

int main() {
    vector<int> hs(9);
    for (int i=0;i<9;i++){
        cin >> hs[i];
    }

    vector<int> comb(7);

    Combination(hs,comb,7,0,0);
    
}

void Combination(vector<int> arr, vector<int> comb, int r, int index, int depth) {
    if (r==0) {
        // comb 에 대해서 원하는 작업 수행
        int sum=0;
        for (int i=0;i<comb.size();i++){
            sum+=comb[i];
        }
        if (sum==100){
            sort(comb.begin(),comb.end());
            for (int i=0;i<7;i++){
                cout << comb[i] << endl;
            }
            exit(0);
        }
    }
    else if (depth == arr.size()) {
        return;
    }
    else {
        // arr[depth]를 뽑은 경우
        comb[index] = arr[depth];
        Combination(arr,comb,r-1,index+1,depth+1);

        // arr[depth]를 뽑지 않은 경우
        Combination(arr,comb,r,index,depth+1);
    }
}
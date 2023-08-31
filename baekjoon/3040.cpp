#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

void Combination(vector<int>,vector<int>,int,int,int);

int main() {
    vector<int> hs;
    int h;
    for (int i=0;i<9;i++){
        cin >> h;
        hs.push_back(h);
    }
    int r = 7;
    vector<int> comb(r);
    Combination(hs,comb,r,0,0);
    
}

void Combination(vector<int> arr,vector<int> comb, int r, int index, int depth) {
    if (r==0){
        // do what you want with comb vector
        int sum=0;
        for (int i=0;i<7;i++){
            sum+=comb[i];
        }
        if (sum==100){
            sort(comb.begin(),comb.end());
            for (auto it=comb.begin();it!=comb.end();it++){
                cout << *it << endl;
            }
        }
    }
    else if(depth==arr.size()){
        return;
    }
    else{
        // arr[depth]를 뽑는 경우
        comb[index] = arr[depth];
        Combination(arr,comb,r-1,index+1,depth+1);
        // arr[depth]를 뽑지 않는 경우
        Combination(arr,comb,r,index,depth+1);
    }
}
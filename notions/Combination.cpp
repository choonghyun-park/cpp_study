#include <iostream>
#include <vector>
using namespace std;

void Combination(vector<int> arr,vector<int> comb, int r, int index, int depth){
    if (r==0) {
        // do what you want with comb vector
        // example
        for (auto it=comb.begin();it!=comb.end();it++){
            cout << *it << " ";
        }
        cout << endl;
    }
    else if(depth==arr.size()){ // depth보다 크게 탐색하는 경우 제외
        return;
    }
    else {
        // arr[depth]를 뽑는 경우
        comb[index] = arr[depth];
        Combination(arr,comb,r-1,index+1,depth+1);
        // arr[depth]를 뽑지 않는 경우
        Combination(arr,comb,r,index,depth+1);

    }
}


int main() {
    vector<int> arr = {1,2,3,4,5};
    int r=3;
    vector<int> comb(r); // {0,0,0}

    Combination(arr,comb,r,0,0);
}
#include <iostream>
#include <vector>
using namespace std;

int sum_to(int);

int main() {
    int A,B;
    cin >> A >> B;
    vector<int> V;
    
    for (int i=1;i<1000;i++){
        for (int j=0;j<i;j++){
            V.push_back(i);    
        }
        if (V.size()>=1000){
            break;
        }
    }
    int sum=0;
    for (int i=A-1;i<=B-1;i++){
        sum+=V[i];
    }
    cout << sum;
}


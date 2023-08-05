#include <iostream>

using namespace std;

int main() {
    int scores[5][4] = {};

    for (int i=0;i<5;i++){
        for (int j=0;j<4;j++){
            cin >> scores[i][j];
        }
    }
    
    int max_sum = 0;
    int max_i = 0;

    for (int i=0;i<5;i++){
        int sum = 0;
        for (int j=0;j<4;j++){
            sum += scores[i][j];
        }
        if (sum>max_sum){
            max_sum = sum;
            max_i = i;
        }
    }
    
    cout << max_i+1 << ' ' << max_sum;
}
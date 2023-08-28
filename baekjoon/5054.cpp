#include <iostream>

using namespace std;

int main() {
    int t,n;
    cin >> t;
    int x[100][100]; 
    int results[100];
    // input
    for (int i=0;i<t;i++){
        cin >> n;
        int min,max;
        for (int j=0;j<n;j++){
            cin >> x[i][j];
            if (j==0){
                min=x[i][0];
                max=x[i][0];                
            }
            if (x[i][j]<min){
                min = x[i][j];
            }
            if (x[i][j]>max){
                max = x[i][j];
            }
        }
        results[i] = (max-min)*2;
    } 
    
    for (int i=0;i<t;i++){
        cout << results[i] << endl;
    }
}
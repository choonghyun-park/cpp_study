#include <iostream>
#include <algorithm>

using namespace std;

int main() {
    // W
    int w[10];
    int k[10];
    for (int i=0;i<10;i++){
        cin >> w[i];
    }
    // K
    for (int i=0;i<10;i++){
        cin >> k[i];
    }
    sort(w,w+10);
    sort(k,k+10);
    int w_score = 0;
    int k_score = 0;
    for (int i=7;i<10;i++){
        w_score+= w[i];
        k_score+= k[i];
    }
    cout << w_score << ' ' << k_score << endl;
}
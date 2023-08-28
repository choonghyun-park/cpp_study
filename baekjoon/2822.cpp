#include <iostream>
#include <algorithm>

using namespace std;

int main() {
    int scores[8];
    int origins[8];
    for (int i=0;i<8;i++){
        cin >> scores[i];
    }
    copy(begin(scores),end(scores),begin(origins));
    sort(scores,scores+8);

    int sum = 0;
    int index[5];
    for (int i=3;i<8;i++){
        auto it = find(begin(origins), end(origins), scores[i]);
        index[i-3] = distance(origins,it);
        sum += scores[i];
    }
    sort(index,index+5);
    cout << sum <<endl;
    for (int i=0;i<5;i++){
        cout << index[i]+1 << ' ';
    }
    cout << endl;
}


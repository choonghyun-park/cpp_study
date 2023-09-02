#include <iostream>
#include <string>
#include <vector>
using namespace std;

int main() {
    int T;
    cin >> T;
    for (int i=0;i<T;i++){
        string w1,w2;
        cin >> w1 >> w2;
        int len = w1.size();
        int d = 0;
        cout << "Distances: ";
        for (int j=0;j<len;j++){
            if (w1[j]<=w2[j]){
                d = w2[j]-w1[j];
            }
            else {
                d = w2[j]+26-w1[j];
            }
            cout << d << ' ';
        }
        cout << endl;
    }
}
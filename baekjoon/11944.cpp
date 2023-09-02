#include <iostream>
#include <string>
using namespace std;

int main() {
    int N,M,a,b;
    cin >> N >> M;
    string n_str;
    n_str = to_string(N);
    int len = n_str.size();
    a = M/len;
    b = M%len;
    if (N<a){
        for (int i=0;i<N;i++){
            cout << n_str;
        }
    }
    else {
        for (int i=0;i<a;i++){
            cout << n_str;
        }
        for (int i=0;i<b;i++){
            cout << n_str[i];
        }
    }

    cout << endl;
}
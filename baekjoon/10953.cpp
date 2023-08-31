#include <iostream>
#include <vector>
#include <string>
using namespace std;

int main() {
    int T;
    cin >> T;
    vector<int> results;
    int A,B;
    char c;
    for (int i=0;i<T;i++){
        cin >> A >> c >> B;
        results.push_back(A+B);
    }
    for (int i=0;i<T;i++){
        cout << results[i] << endl;
    }
}
#include <iostream>
#include <set>
using namespace std;

int main() {
    set<int> S;
    int input, nmj;
    for (int i=0;i<10;i++){
        cin >> input;
        nmj = input % 42;
        S.insert(nmj);
    }
    cout << S.size();
}
#include <iostream>
#include <string>
using namespace std;

int main() {
    int n;
    cin >> n;
    string rets[1000];
    for (int i=0;i<n;i++){
        int pos;
        string word;
        cin >> pos >> word;
        string word1 = word.substr(0,pos-1);
        string word2 = word.substr(pos); // 마지막까지

        string ret = word1 + word2;
        rets[i] = ret;
    }

    for (int i=0;i<n;i++){
        cout << rets[i] << endl;
    }
}
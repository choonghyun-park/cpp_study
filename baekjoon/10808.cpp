#include <iostream>
#include <string>
#include <vector>
using namespace std;

int main() {
    string str;
    cin >> str;
    int len = 'z'-'a' + 1;
    vector<int> letters(len);
    for (int i=0;i<str.size();i++){
        int c = str[i];
        letters[c-'a']+=1;
    }
    for (int i=0;i<len;i++){
        cout << letters[i] << ' ';
    }
    cout << endl;
    
}
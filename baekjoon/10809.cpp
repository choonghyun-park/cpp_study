#include <iostream>
#include <string>

using namespace std;

int main() {
    string s;
    cin >> s;
    for (int i='a';i<='z';i++){
        char c = i;
        if (s.find(c) != string::npos){
            cout << s.find(c) << ' ';
        }
        else{
            cout << -1 << ' ';
        }
    }
    cout << endl;
}
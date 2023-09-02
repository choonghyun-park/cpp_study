#include <iostream>

using namespace std;

int main() {
    string str;
    cin >> str;
    int cnt=1;
    for (int i=0;i<str.size();i++){
        char c = str[i];
        if (c==','){
            cnt+=1;
        }
    }   
    cout << cnt << endl;
}
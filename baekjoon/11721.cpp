#include <iostream>
#include <string>

using namespace std;

int main() {
    string s;
    cin >> s;
    int a,b;
    a = s.size()/10;
    b = s.size()%10;
    for (int i=0;i<a;i++){
        cout << s.substr(i*10,10) << endl;
    }
    cout << s.substr(a*10,b) << endl;
}
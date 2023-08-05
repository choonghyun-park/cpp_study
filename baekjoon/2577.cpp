#include <iostream>
#include <string>
using namespace std;

int main() {
    int A,B,C;
    cin >> A >> B >> C;
    int mul = A*B*C;

    string str = to_string(mul);
    int cnts[10];
    for (int i=0;i<10;i++){
        cnts[i]=0;
    }
    for (int i=0;i<sizeof(str);i++){
        char c = str[i];
        int n = c - '0';
        cnts[n]++;
    }
    for (int i=0;i<10;i++){
        cout << cnts[i] << endl;
    }
}
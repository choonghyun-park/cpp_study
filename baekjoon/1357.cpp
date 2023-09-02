#include <iostream>
#include <string>
#include <cmath>
using namespace std;

int rev(int N){
    int ret=0;
    string n;
    n = to_string(N);
    int digit = n.size()-1;
    while (N>0){
        ret += (N%10) * pow(10,digit);
        N /= 10;
        digit -= 1;
    }
    return ret;
}

int main() {
    int X,Y;
    cin >> X >> Y;
    cout << rev(rev(X)+rev(Y)) << endl;
}
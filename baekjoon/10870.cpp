#include <iostream>
#include <vector>

int Fibonacci(int n){
    if (n==0){
        return 0;
    }
    else if (n==1){
        return 1;
    }
    return Fibonacci(n-1) + Fibonacci(n-2);
}

using namespace std;

int main() {
    int n;
    cin >> n;
    cout << Fibonacci(n) << endl;
}

#include <iostream>
#include <string>
using namespace std;

int main() {
    int N;
    string n_string;
    int sum = 0;

    cin >> N >> n_string;
    for (int i=0;i<N;i++){
        int n_i = n_string[i] - '0';
        sum += n_i;
    }
    cout << sum << endl;
}
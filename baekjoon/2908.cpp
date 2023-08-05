#include <iostream>

using namespace std;

int main() {
    int num1, num2;
    int rev1, rev2;

    cin >> num1 >> num2;

    rev1 = 0;
    rev2 = 0;

    rev1 += num1/100;
    rev1 += ((num1%100)/10)*10;
    rev1 += (num1%10)*100;

    rev2 += num2/100;
    rev2 += ((num2%100)/10)*10;
    rev2 += (num2%10)*100;

    if(rev1>rev2){
        cout << rev1;
    }
    else {
        cout << rev2;
    }

}
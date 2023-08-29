#include <iostream>
#include <algorithm>
using namespace std;

int main(){
    double avg;
    int mid;
    int inputs[5];
    for (int i=0;i<5;i++){
        cin >> inputs[i];
    }
    for (int i=0;i<5;i++){
        avg+=inputs[i];
    }
    avg = (double)avg / 5.0;
    sort(inputs,inputs+5);
    mid = inputs[2];
    cout << avg << endl;
    cout << mid << endl;
}
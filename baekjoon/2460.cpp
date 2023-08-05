#include <iostream>

using namespace std;

int main() {
    int getin[10], getout[10];
    int people = 0;
    int max = 0;

    for (int i=0;i<10;i++){
        cin >> getin[i] >> getout[i];
    }



    // test print
    for (int i=0;i<10;i++){
        people -= getin[i];
        people += getout[i];

        if (people>max){
            max = people;
        }
    }

    cout << max;
}
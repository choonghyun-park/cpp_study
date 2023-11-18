#include <iostream>
#include <utility>

using namespace std;

int main() {
    pair<int,int> p1;
    pair<int,int> p2;

    p1 = make_pair(1,2);
    p2.first = 3;
    p2.second = 4;

    cout << "p1.first : " << p1.first << endl;
    cout << "p1.second : " << p1.second << endl;
    cout << "p2.first : " << p2.first << endl;
    cout << "p2.second : " << p2.second << endl;

}
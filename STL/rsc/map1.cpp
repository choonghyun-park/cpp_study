#include <iostream>
#include <map>
#include <string>

using namespace std;

int main() {
    map<int,string> m;
    m[1] = "one";
    m[2] = "two";
    cout << m[1] << endl; 
    cout << m[2] << endl;
    
    auto it = m.find(1);        // iterator 를 선언하여 접근
    cout << it->first << endl;  // iterator는 pair 객체의 포인터

    cout << m.find(2)->second << endl; // iterator를 선언하여 할당하지 않고 바로 접근해도 된다.
}
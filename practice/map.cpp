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
}
#include <iostream>
#include <map>
#include <string>

using namespace std;

int main() {
    multimap<int,string> mm;

    mm.insert(make_pair(1,"one"));
    mm.insert(make_pair(2,"two"));

    cout << mm.find(1)->first << endl;
    cout << mm.find(2)->second << endl;
}
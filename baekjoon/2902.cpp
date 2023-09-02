#include <iostream>
#include <string>
using namespace std;

int main() {
    string names,name;
    cin >> names;
    name = "";

    for (int i=0;i<names.size();i++){
        char c = names[i];
        if (c>='A'&&c<='Z'){
            name.push_back(c);
        }
    }
    cout << name << endl;
}
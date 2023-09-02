#include <iostream>
#include <string>

using namespace std;

int main() {
    while(1){
        string str,new_str;
        getline(cin,str);
        new_str = "";
        if (str.compare("END")==0){
            break;
        }
        for (int i=str.size()-1;i>=0;i--){
            new_str.push_back(str[i]);
        }
        cout << new_str << endl;
    }
}
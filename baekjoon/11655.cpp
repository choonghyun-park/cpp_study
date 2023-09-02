#include <iostream>
#include <string>

using namespace std;

bool isAlphabet(char c){
    if (c>='a'&&c<='z'){
        return true;
    }
    else if (c>='A'&&c<='Z'){
        return true;
    }
    else {
        return false;
    }
}

int main() {
    string s;
    getline(cin,s);
    for (int i=0;i<s.size();i++){
        char c = s[i];
        if (c>='a'&&c<='z'){
            if (c>='a'+13){
                s[i] = c-13;
            }
            else{
                s[i] = c+13;
            }
        }
        else if (c>='A'&&c<='Z'){
            if (c>='A'+13){
                s[i] = c-13;
            }
            else {
                s[i] = c+13;
            }
        }
    }
    cout << s << endl;
}

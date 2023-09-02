#include <iostream>
#include <string>
#include <vector>
using namespace std;

int main() {
    string str;
    cin >> str;
    int len = 'z'-'a' + 1;
    vector<int> letters(len);
    for (int i=0;i<str.size();i++){
        int c = str[i];
        if (c>='a'&&c<='z'){
            letters[c-'a']+=1;
        }
        else if (c>='A'&&c<='Z'){
            letters[c-'A']+=1;
        }
    }
    int max = -1;
    int cnt = 0;
    int index = -1;

    for (int i=0;i<len;i++){
        if (letters[i]>max){
            max = letters[i];
            cnt = 0;
            index = i;
        }
        else if(letters[i]==max){
            cnt += 1;
        }
    }
    if (cnt>0){
        cout << '?' << endl;
    }
    else{
        char c = index + 'A';
        cout << c << endl;
    }
}
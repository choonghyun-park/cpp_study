#include <iostream>
#include <string>

using namespace std;

int main() {
    string word,word_new;
    cin >> word;
    word_new = "";
    for (int i=0;i<word.size();i++){
        char c = word[i];
        char c_new;
        if (c>='a' && c<='z') {
            c_new = 'A' + (c -'a');
        }
        else if (c>='A' && c<='Z') {
            c_new = 'a' + (c-'A');
        }
        word_new.push_back(c_new);
    }
    cout << word_new << endl;
}
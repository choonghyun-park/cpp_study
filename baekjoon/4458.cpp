#include <iostream>
#include <string>
#include <vector>
using namespace std;

int main() {
    int N;
    cin >> N;
    cin.ignore();
    for (int i=0;i<N;i++){
        string sentence;
        getline(cin,sentence);
        if (sentence[0]>='a'&&sentence[0]<='z'){
            sentence[0] += 'A'-'a';
        }
        cout << sentence << endl;
    }    
}
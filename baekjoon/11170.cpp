#include <iostream>
#include <string>

using namespace std;

int main() {
    int T;
    cin >> T;
    for (int i=0;i<T;i++){
        int N,M;
        cin >> N >> M;
        string s;
        int cnt=0;
        for (int i=N;i<=M;i++){
            s = to_string(i);
            for (int j=0;j<s.size();j++){
                if (s[j]=='0'){
                    cnt+=1;
                }
            }
        }
        cout<<cnt<<endl;
    }
}
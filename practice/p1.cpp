#include <iostream>
#include <vector>

using namespace std;

int main() {
    vector<int> V;

    V.push_back(1);
    V.push_back(10);
    V.push_back(100);

    for (auto it=V.begin();it!=V.end();it++){
        int value = *it;
        int idx = it - V.begin();
        cout << "value : " << value << ", " << "index : " << idx << endl;
    }
}
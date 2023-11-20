#include <iostream>

using namespace std;

void func(int a) {
    cout << "void func(int a) 호출" << endl;
}

void func(int a,int b) {
    cout << "void func(int a,int b) 호출" << endl;
}

int main() {
    func(4);
    func(5,6);
    return 0;
}



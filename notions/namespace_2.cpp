#include <iostream>

using namespace std;
namespace A {
    void add() {
        cout << "A의 add() 호출" << endl;
    }
    void minus() {
        cout << "A의 minus() 호출" << endl;
    }
}

namespace B {
    void add() {
        cout << "B의 add() 호출" << endl;
    }
}

using A::add;

int main() {
    add();
    A::minus();
    return 0;
}

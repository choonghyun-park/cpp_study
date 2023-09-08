#include <iostream>

namespace A {
    void add() {
        std::cout << "A의 add() 호출" << std::endl;
    }
}

namespace B {
    void add() {
        std::cout << "B의 add() 호출" << std::endl;
    }
}

int main() {
    A::add();
    B::add();
    return 0;
}
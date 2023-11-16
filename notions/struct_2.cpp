#include <iostream>

using namespace std;

struct student {
    int id;
    char *name;
    float percentage;

    void Show() {
        cout << "아이디: " << s.id << endl;
        cout << "이름: " << s.name << endl;
        cout << "백분율: " << s.percentage << endl;
    }
}; // 구조체 뒤에 세미콜론이 와야 함

int main(){
    student s={1,"박충현",90.5};

    s.Show();    
    return 0;
}


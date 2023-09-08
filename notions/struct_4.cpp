#include <iostream>

using namespace std;

struct student {
private:
    int id;
    char *name;
    float percentage;

public:
    void Show();
    void SetInfo(int _id, char * _name, float _percentage);
};

void student::Show() {
    cout << "아이디: " << id << endl;
    cout << "이름: " << name << endl;
    cout << "백분율: " << percentage << endl;
}

void student::SetInfo(int _id, char * _name, float _percentage){
    id = _id;
    name = _name;
    percentage = _percentage;
}

int main() {
    student s;
    s.SetInfo(1,"김철수",90.5);
    s.Show();
    return 0;
}
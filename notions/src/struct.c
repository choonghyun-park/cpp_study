#include <stdio.h>

struct student {
    int id;
    char *name;
    float percentage;
}; // 구조체 뒤에 세미클론이 와야 함

int main() {
    struct student s = {1,"박충현",90.5};
    printf("아이디: %d \n",s.id);
    printf("이름: %s \n",s.name);
    printf("백분율: %f \n",s.percentage);
    return 0;
}
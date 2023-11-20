#include <stdio.h>
#include <stdlib.h>

int main() {
    int studentNum, totalScore=0;
    int* studentScore;
    int i;

    printf("학생 수를 입력하세요: ");
    scanf("%d",&studentNum);
    studentScore = (int* )malloc(sizeof(int) * studentNum);

    for(i=0;i<studentNum;i++){
        printf("%d번 학생의 점수", i+1);
        scanf("%d",&studentScore[i]);
        totalScore += studentScore[i];
    }

    printf("모든 학생의 평균: %d\n",totalScore/studentNum);
    free(studentScore);
    return 0;
}

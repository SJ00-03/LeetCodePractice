#include <stdio.h>

int main(void){
    int score;
    scanf("%d", &score);

    if(score >= 90) printf("A\n");
    else if(score >= 80 && score < 90) printf("B\n");
    else if(score >= 70 && score < 80) printf("C\n");
    else if(score >= 60 && score < 70) printf("D\n");
    else printf("F\n");

    return 0;
}

/*
else if로 내려왔다는 것은 이미 score < 90이라는 뜻
#include <stdio.h>

int main(void)
{
    int score;

    scanf("%d", &score);

    if (score >= 90) {
        printf("A\n");
    } else if (score >= 80) {
        printf("B\n");
    } else if (score >= 70) {
        printf("C\n");
    } else if (score >= 60) {
        printf("D\n");
    } else {
        printf("F\n");
    }

    return 0;
}
*/
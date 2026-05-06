// 로컬 실습

// 1. 두 정수를 입력받아 사칙연산 출력

/*문제 설명

두 정수 a, b를 입력받아 다음 연산 결과를 출력하는 프로그램을 작성하시오.

덧셈
뺄셈
곱셈
나눗셈
나머지

단, b는 0이 아니라고 가정한다.*/

#include <stdio.h>
int main(void)
{
    int a, b;
    scanf("%d %d", &a, &b);

    printf("a + b = %d\n", a + b);
    printf("a - b = %d\n", a - b);
    printf("a * b = %d\n", a * b);
    printf("a / b = %d\n", a / b);
    printf("a %% b = %d\n", a % b);

    return 0;
}
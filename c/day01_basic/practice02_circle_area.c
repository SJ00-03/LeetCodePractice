/*2. 반지름을 입력받아 원의 넓이 계산
파일명
practice02_circle_area.c
문제 설명

반지름 r을 입력받아 원의 넓이를 계산하는 프로그램을 작성하시오.

원의 넓이는 다음 공식으로 계산한다.

area = r * r * 3.14
입력 예시
5
출력 예시
radius = 5.00
area = 78.50*/

#include <stdio.h>

int main(void)
{
    double r;
    scanf("%lf", &r);
    double area = r * r * 3.14;

    printf("radius = %.2f\n", r);
    printf("area = %.2f\n", area);

    return 0;
}

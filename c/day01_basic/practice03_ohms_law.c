/*문제 설명

전압 V와 저항 R을 입력받아 전류 I를 계산하는 프로그램을 작성하시오.

옴의 법칙은 다음과 같다.

I = V / R

여기서

V는 전압이다.
R은 저항이다.
I는 전류이다.

단, R은 0이 아니라고 가정한다.

입력 예시
12 4
출력 예시
Voltage = 12.00 V
Resistance = 4.00 ohm
Current = 3.00 A*/

#include <stdio.h>

int main(void)
{
    double V, R;
    scanf("%lf %lf", &V, &R);

    printf("Voltage = %.2f V\n", V);
    printf("Resistance = %.2f ohm\n", R);
    printf("Current = %.2f\n A", V / R);

    return 0;
}

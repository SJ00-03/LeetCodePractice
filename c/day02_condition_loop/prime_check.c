#include <stdio.h>

int main(void){
    int n;
    int i;
    int count = 0;
    scanf("%d", &n);

    for(i = 1; i < n+1; i++)
    {
        if(n % i == 0) count++;
    }

    if(count == 2)
    {
        printf("Prime\n");
    }
    else printf("Not Prime\n");

}

/*
#include <stdio.h>

static int is_prime(int n)
{
    if (n <= 1) {
        return 0;
    }

    for (int i = 2; i <= n / i; i++) {
        if (n % i == 0) {
            return 0;
        }
    }

    return 1;
}

int main(void)
{
    int n;

    scanf("%d", &n);

    if (is_prime(n)) {
        printf("Prime\n");
    } else {
        printf("Not Prime\n");
    }

    return 0;
}



#include <stdio.h>

int main(void)
{
    int n;
    int is_prime = 1;

    scanf("%d", &n);

    if (n <= 1) {
        is_prime = 0;
    } else {
        for (int i = 2; i * i <= n; i++) {
            if (n % i == 0) {
                is_prime = 0;
                break;
            }
        }
    }

    if (is_prime) {
        printf("Prime\n");
    } else {
        printf("Not Prime\n");
    }

    return 0;
}
*/
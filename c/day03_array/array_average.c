# include <stdio.h>

int main(void)
{
    int size = 10;
    int arr[size];
    double avg = 0;
    int sum = 0;
    
    for(int i = 0; i < size; i++)
    {
        scanf("%d", &arr[i]);
    }

    for(int i = 0; i < size; i++)
    {
        sum += arr[i];
        if(i == size - 1) avg = (double)sum / 10;
    }

    printf("%.2f\n", avg);

    return 0;
}
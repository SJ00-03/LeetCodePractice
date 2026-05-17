#include <stdio.h>

int main(void){

    int size = 10;
    int arr[size];
    int avg = 0;
    
    for(int i = 0; i < size; i++)
    {
        scanf("%d", &arr[i]);
    }
    
    int max = arr[0];

    for(int i = 1; i < size; i++)
    {
        if(arr[i] > max) max = arr[i];
    }

    printf("%d\n", max);

    return 0;
}
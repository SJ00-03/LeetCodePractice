#include <stdio.h>

int main(void){

    int size = 10;
    int arr[size];
        
    for(int i = 0; i < size; i++)
    {
        scanf("%d", &arr[i]);
    }

    for(int j = 9; j>= 0; j--)
    {
        printf("%d ", arr[j]);
    }

    printf("\n");

    return 0;
    
}
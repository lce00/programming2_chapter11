#include<stdio.h>

int main()
{
    int arr[5] = {2, 4, 6, 8, 10};

    int size = sizeof(arr) / sizeof(arr[0]);

    int *ptr = arr;
    
    int sum = 0;

    for (int i = 0; i < size; i++) {
        sum += *ptr++;
    }

    int average;

    average = sum / size;

    printf("sum = %d, average = %d\n", sum, average);

    return 0;
}
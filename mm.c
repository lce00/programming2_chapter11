#include<stdio.h>
#define SIZE 5

int get_min_max(int arr[SIZE], int *min, int *max)
{
    
    int* p = NULL;
    p = arr;

    

    for (int i = 0; i < SIZE; i++) {
        
        if (*(p+i) <= *min) *min = *(p+i);
        if (*(p+i) >= *max) *max = *(p+i);
    }

}

int main()
{
    

    int arr[SIZE] = {10, 2, 6, 8, 4};

    int min = arr[0];
    int max = arr[0];

    get_min_max(arr, &min, &max);

    printf("min = %d, max = %d\n", min, max);



    return 0;
}
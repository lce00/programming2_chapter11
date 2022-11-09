#include<stdio.h>

int main()
{
    int x = 10;
    int *p = &x;

    printf("x = %d\n", x);
    printf("x address = %p\n", &x);
    printf("p = %p\n", &p);
    printf("p value = %d\n", *p);



}
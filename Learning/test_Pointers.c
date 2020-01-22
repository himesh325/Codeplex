#include<stdio.h>

int main(void)
{
    
    int *ptr;
    int a=10;
    
    ptr= &a;
    printf("value of address of a is %d",ptr);
    
    return 0;
}
#include<stdio.h>

int main(void)
{
    int a[3]={10,100,1000};
    
    int *ptr=a;
    
    for(int i=0;i<3;i++)
    {
        
        printf("Value of *ptr = %d\n", *ptr); 
        printf("Value of ptr = %p\n\n", ptr); 
        
        *ptr++;
    }
    
    return 0;
    
}
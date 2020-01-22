#include<stdio.h>

int main(void)
{
    
    int list[]={1,4,5,7,3,2,6};
    
    
    int target;
    int n;
    
    printf("Enter the value that needs to be searched ");
    scanf("%d", &n);
    
    
    for(int i=0;i<=6;i++)
    {
       
        if(list[i]==n)
        {
            target=i+1;
            break;
        }
        
    }
    
    
    printf("\nLocation of Element is %d", target);
    
    
    return 0;
}
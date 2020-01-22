#include<stdio.h>

int display(int *array, int size)
{
    
    for(int i=0;i<size;i++)
    {
        
        printf("%d\n",array[i]);
    }
}

int main(void)
{
    int N;
    
    printf("Enter the Array Size\n");
    scanf("%d",&N);
    
    int a[N];
    printf("\nEnter the array elements\n");
    
    for(int i=0;i<N;i++)
    {
        scanf("%d",&a[i]);
        
    }
    
    printf("\nDisplaying array elements\n");
    display(a,N);
    
    return 0;
}



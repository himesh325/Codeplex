#include<stdio.h>

int main(void)

{
    int N,M;
    
    printf("Enter the list size\n");
    scanf("%d",&N);
    
    int List[N];
    
    printf("\nEnter the list\n");
    
    for(int i=0;i<N;i++)
    {
        scanf("%d",&List[i]);
        
    }
    int high = N-1;
    int low = 0;
    int median = (low+high)/2;
    printf("\nEnter the Element\n ");
    scanf("%d",&M);
    
    
    while(low<high)
    {
        median = (low+high)/2;
        if(List[median]<M)
        {
            low=low+1;
        }
        else if (List[median]>M)
        {
            high=high-1;
        }
        else if(List[median]==M)
        {
            printf("Match found at index %d",median+1);
            break;
        }
        else
        {
            printf("Element not found");
        }
    }
    
    return 0;
    
    
}
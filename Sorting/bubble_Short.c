#include<stdio.h>

int main(void)
{
    int N;
    
    printf("\nEnter the list size\n");
    scanf("%d",&N);
    
    int List[N];
    printf("\nEnter the array elements\n");
    for(int i=0;i<N;i++)
    {
        scanf("%d",&List[i]);
    }
    
    printf("\nExisting List is\n");
    for(int i=0;i<N;i++)
    {
        printf("%d\n",List[i]);
    }
    
    int temp;
    for(int i=0;i<N-1;i++)
    {
        for(int j=0;j<N-i-1;j++)
        {
            if(List[j]>List[j+1])
            {
            temp=List[j];
            List[j]=List[j+1];
            List[j+1]=temp;
            }
        }
    }
    
    printf("\nNew List is\n");
    for(int i=0;i<N;i++)
    {
        printf("%d\n",List[i]);
    }
    
}
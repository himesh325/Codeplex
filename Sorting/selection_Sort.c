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
    
    int minimum,temp;
    
    for(int i=0;i<N-1;i++)
    {
        minimum=i;
        
        for(int j=i+1;j<N;j++)
        {
            if(List[minimum]>List[j])
            {
                minimum=j;
            }
            
            temp=List[i];
            List[i]=List[minimum];
            List[minimum]=temp;
        }
    }
    
    printf("\nNew List is\n");
    for(int i=0;i<N;i++)
    {
        printf("%d\n",List[i]);
    }
    
}
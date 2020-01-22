#include<stdio.h>

//int compare(int var1, int var2)
int main(void)
{
  int a,b;
  
  printf("Enter the value of a and b\n");
  scanf("%d %d", &a,&b);
    
    
    
    int x=compare(a,b);
    printf("\nLarger value among entered integers is %d",x);
    
    return 0;
    
}

int compare(int var1, int var2)
{
    if(var1>var2)
    {
        return var1;
    }
    else
    {
        return var2;
    }
    
}
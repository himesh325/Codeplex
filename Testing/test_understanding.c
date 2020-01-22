/* Efficient Program to Compute Sum of Series 1/1! + 1/2! + 1/3! + 1/4! + .. + 1/n! */

/* step 1 is finding the factorial of a number */

#include<stdio.h>


int factorial(int number)
{
    int fact=1;
   for(int i=1;i<=number;i++)
   {
       fact= fact *i;
   }
   return fact;
    
   
}

double sum(int number)
{
    double sum = 0;
    
    for(int i=1;i<=number;i++)
    {
        sum += 1.0/factorial(i);
    
    }
    return sum;
    
    
}

int main(void)
{
    int N;
    double result;
    scanf("%d",&N);
    
    printf("%d\t",factorial(N));
    
    result=sum(N);
    printf("%lf",result);
    
    
    
    return 0;
    
}
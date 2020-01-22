//factorial of a number
#include<stdio.h>


int factorial(int number)
{
	
	if(number>=1)
	{
		
		return number*factorial(number-1);
	}
	else
	{
	return 1;
    }
	
}
int main(void)
{
	int n;
	int result;
	scanf("%d",&n);
	
	result=factorial(n);
	printf("%d",result);
	
	
	
	return 0;
}


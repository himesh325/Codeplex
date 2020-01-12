#include <stdio.h>

int main(void) {
	int a;
	float b;
	
	printf("Enter the integer\n");
	scanf("%d", &a);
	
	printf("Enter the floating point decimal value\n");
	scanf("%f", &b);
	
	
	if(a>b)
	{
	    printf("%d is greater than %f", a ,b);
	}
	else
	{
	    printf("%f is greater than %d", b, a);
	}
	
	
	return 0;
}


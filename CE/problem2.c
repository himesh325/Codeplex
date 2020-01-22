/*
Given a number n and a value k, the task is to find the smallest m(m>=n), such that m can be represented as a sum of distinct powers of k.
Input: n = 29, k = 5
Output: 30

Input: n = 5, k = 5
Output: 5

Input: n = 29, k = 5
Output: 30

*/

#include<stdio.h>

int powerfunc(int base,int exp)
{
    int flag=1;
    for(int i=1;i<=exp;i++)
    {
       flag=flag*base;
    }
    return flag;
    
    
}

int main(void)
{
    int n,k,value;
    int sum=0;
    
scanf("%d %d",&n,&k);

result=powerfunc(n,k);

value=n/k;

    return 0;
}
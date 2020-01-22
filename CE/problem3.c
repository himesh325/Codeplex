/*

You have been given an array of size N consisting of integers. In addition you have been given an element M you need to find and print the index of the last occurrence of this element M in the array if it exists in it, otherwise print -1. Consider this array to be 1 indexed.

Input Format:

The first line consists of 2 integers N and M denoting the size of the array and the element to be searched for in the array respectively . The next line contains N space separated integers denoting the elements of of the array.

Output Format

Print a single integer denoting the index of the last occurrence of integer M in the array if it exists, otherwise print -1.
*/


#include<stdio.h>

int main(void)
{
   int M,N;
   
   int target=0;
   int flag =0;
   scanf("%d %d",&N,&M);
   

    
    int List[N];
    
      for(int i=0;i<N;i++)
      {
          scanf("%d",&List[i]);
      }
      
      for(int i=0;i<N;i++)
      {
          if(List[i]==M)
          {
              target=i+1;
          }
          else
          {
              flag =1;
          }
          
      }
      
      if (target == 0)
      {
          printf("-1");
      }
      else
      {
          printf("%d",target);
      }
      
      
      
      
      return 0;
}
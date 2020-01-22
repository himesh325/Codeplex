/*Linear Search: Given an integer array and an element x, find if element is present in array or not. If element is present, then print index of its first occurrence. Else print -1.

Input:
First-line contains an integer, the number of test cases ‘T’. Each test case should be an integer. Size of the array ‘N’ in the second line. In the third line, input the integer elements of the array in a single line separated by space. Element X should be inputted in the fourth line, i.e., after entering the elements of the array. Repeat the above steps second line onwards for multiple test cases.

Output:
Print the output in a separate line returning the index of the element X. If the element is not present, then print -1.

Constraints:
1 <= T <= 100
1 <= N <= 100
1 <= Arr[i] <= 100

Input:
2
4
1 2 3 4
3
5
10 90 20 30 40 
40
Output:
2
4

*/

#include<stdio.h>

int main(void)
{
    
    int T,X,N;
    scanf("%d",&T);
    //int locator=0;
    
    for(int i=1;i<=T;i++)
    {
    
        scanf("%d",&N);
        int array[N];
        for(int j=0;j<N;j++)
        {
            scanf("%d ", &array[j]);
        }
        scanf("%d",&X);
    

        int flag=-1;
        int l=0;
    for(int k=0;k<N;k++)
    {
        if(array[k]==X)
        {
            printf("%d\n",k);
            flag=1;
            break;
        }
        
    }
    
    if(flag==-1)
{
    printf("%d",flag);
}
        
    }
        
       return 0;
    
  
}

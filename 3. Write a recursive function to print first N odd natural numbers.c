/******************************************************************************
3. Write a recursive function to print first N odd natural numbers

*******************************************************************************/

#include <stdio.h>
void natural(int);//function declaration
int main()
{
    int n;
    printf("Enter the value of N :");
    scanf("%d",&n);
    natural(n);

    return 0;
}
void natural(int n)
{  if(n>0)
   {  
       natural(n-1);
       printf(" %d",2*n-1);
   
   }
   
    
}
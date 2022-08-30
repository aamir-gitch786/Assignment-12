/******************************************************************************
2. Write a recursive function to print first N natural numbers in reverse order

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
   {  printf(" %d",n);
       natural(n-1);
   
   }
   
    
}
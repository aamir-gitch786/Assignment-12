/******************************************************************************
1. Write a recursive function to print first N natural numbers(TSRN)

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
   { natural(n-1);
    printf(" %d",n);
   }
   
    
}
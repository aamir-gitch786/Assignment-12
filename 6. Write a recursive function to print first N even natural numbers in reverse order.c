/******************************************************************************
6. Write a recursive function to print first N even natural numbers in reverse order
*******************************************************************************/

#include <stdio.h>
void even(int);
int main()
{
    int n;
    printf("Enter the value of N:");
    scanf("%d",&n);
    even(n);

    return 0;
}
void even(int n)
{
    if(n>0)
    {   printf(" %d ",2*n);
        even(n-1);
       
        
    }
}
/******************************************************************************
7. Write a recursive function to print squares of first N natural numbers
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
    {   
        even(n-1);
        printf(" %d ",n*n);
       
        
    }
}
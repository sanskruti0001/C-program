#include<stdio.h>
int maim()
{
    int n;
    printf("\nEnter the Number:");
    scanf("%d",&n);

    if( n%3==0 && n%5==0 )
    {
        printf("\n The number is divisible by 3 and 5");
    }
    else if(n%3==0)
    {
        printf("\n The number is divisible by 3 ");
    }
    else
    {
        printf("\n The number is divisible by 5");
    }
    
    return 0;
}
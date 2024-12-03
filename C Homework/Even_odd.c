#include<stdio.h>
int main()
{
    int a;
    printf("\nEnter the number:");
    scanf("%d",&a);

    if(a%2==0)
    {
        printf("\nthe number is even ",a);
    }
    else
    {
       printf("\nthe number is odd ",a); 
    }
    return 0;
}
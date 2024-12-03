#include<stdio.h>
int main()
{
    int num ;
    printf("\nEnter the Number : = ");
    scanf("%d",&num);

    if (num % 3 == 0 && num % 5 == 0  )
    {
        printf("\nMSG : C Language");
    }
    else if (num % 5 == 0 )
    {
        printf("\nMSG : Language ");
    }
    else if (num % 3 == 0)
    {
        printf("\nMSG : C  ");
    }
    
    






    return 0 ; 
}
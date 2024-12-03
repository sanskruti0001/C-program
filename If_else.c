#include <stdio.h>
int main()
{
    printf("\n -------------------- for Not Equal to Operator --------------------\n");
    //  not equals to operator : value should not be equal
    if (10 != 10)
    {
        printf("\nTrue(1) : They are not Equal ...! ");
    }
    else
    {
        printf("\nFalse(0) :They are Equal ...! ");
    }

    printf("\n -------------------- for Equal to Operator --------------------\n");
    if (10 == 11 )
    {
        printf("\nTrue(1) : They are Equal ...! ");
    }
    else
    {
        printf("\nFalse(0) :They are not Equal ...! ");
    }

    
    printf("\n -------------------- for age validation --------------------\n");
    int age;
    printf("\nEnter the value of age : = ");
    scanf("%d", &age);

    if (age > 18)
    {
        printf("\nThe age = %d is valid for vote ", age);
    }
    else
    {
        printf("\nThe age = %d is Not valid for vote ", age);
    }

    printf("\n -------------------- for even and odd --------------------\n");

    int num ;
    printf("\nEnter the Number to check whether it is even or odd : =  ");
    scanf("%d",&num);

    if (num % 2 == 0 )
    {
        printf("\nNumber = %d is Even NUmebr ",num);
    }
    else
    {
        printf("\nNumber = %d is Odd NUmebr ",num);
    }
    

    return 0;
}
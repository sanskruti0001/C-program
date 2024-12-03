#include <stdio.h>
int main()
{
    int choice, a, b;
    printf("\n--------- Menu ---------\n");
    printf("\n1: Addition ");
    printf("\n2: Substraction ");
    printf("\n3: Multiplication ");

    printf("\nEnter Your Choice : = ");
    scanf("%d", &choice);

    if (choice == 1 || choice == 2 || choice == 3)
    {
        printf("\nEnter the valur of a and b : = ");
        scanf("%d%d", &a, &b);

        switch (choice)
        {
        // printf("\nHello"); // never executes
        case 1:
            printf("\nThe Addition is : = %d ", a + b);
            break;
        case 2:
            printf("\nThe Substraction is : = %d ", a - b);
            break;
        case 3:
            printf("\nThe Multiplication is : = %d ", a * b);
            break;
        default:
            printf("\nINvalid choice ....! ");
        }
    }
    else
    {
        printf("\nInvalid Input ...! ");
    }

    printf("\n------------  Thank You Visit Again ------------  \n");

    return 0;
}
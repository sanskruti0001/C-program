#include <stdio.h>
int main()
{
    int choice, radius, side, length, width;
    printf("\n--------- Menu ---------\n");
    printf("\n1: Area of Circle ");
    printf("\n2: Area of Square ");
    printf("\n3: Area of Rectangle ");

    printf("\nEnter Your Choice : = ");
    scanf("%d", &choice);

    if (choice == 1)
    {
        printf("\nEnter the Radius : = ");
        scanf("%d", &radius);
        printf("\nThe Area of the circle is : = %f ", 3.14 * radius * radius);
    }
    else if (choice == 2)
    {
        printf("\nEnter the Side : = ");
        scanf("%d", &side);
        printf("\nThe Area of the Square is : = %d ", side * side);
    }

    else if (choice == 3)
    {
        printf("\nEnter the Length and Width : = ");
        scanf("%d%d", &length, &width);
        printf("\nThe Area of the Rectangle is : = %d ", length * width);
    }
    else
    {
        printf("\nInvalid choice ...! ");
    }

    printf("\n------------  Thank You Visit Again ------------  \n");

    return 0;
}
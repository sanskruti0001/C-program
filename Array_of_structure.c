#include<stdio.h>
typedef struct Fruit
{
    int id;
    char name[30];
    char colour[30];
    int price;
} Fruit;

int main()
{
    printf("\n the size of the structure is : = %d ",sizeof(Fruit));
    int a;
    typedef int Integer;
    Integer b = 30;
    
    Fruit f[5];

    for (int i=0; i<=4; i++)
    {
        printf("\nEnter id : = ");
        scanf("%d", &f[i].id);

        printf("\nEnter name : = ");
        scanf("%s", &f[i].name);

        printf("\nEnter colour : = ");
        scanf("%s", &f[i].colour);

        printf("\nEnter price : = ");
        scanf("%d", &f[i].price);
    }

    printf("\n The values are : = \n");
    for(int i=0; i<4; i++)
    {
        printf("\n id : %d", f[i].id);

        printf("\n name : %s", f[i].name);

        printf("\n colour : %s", f[i].colour);

        printf("\n price : %d", f[i].price);

    }

    return 0;
}
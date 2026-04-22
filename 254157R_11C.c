#include <stdio.h>

int main()
{
    int numofunits,availibility;
    float price, total = 0.00;

    printf("How many units u have to bill :");
    scanf("%d",&numofunits);

    for (int i = 1 ; i <= numofunits ; i++ )
    {
        printf("Your %d item price is  RS. ",i);
        scanf("%f",&price);

        total += price ;

    }

    if (total >= 5000)
    {
        total *= 0.95;

        printf("Are u loyality coustmer [yes = 1, no = 0] ? ");
        scanf("%d",&availibility);
        {
            if (availibility == 1)
            {
                total *= 0.90;
                printf("You have 10/100 disscount");
            }
        }
    }
    
    printf("your total amount is %.2f",total);

    
    return 0;
}
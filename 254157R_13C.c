#include <stdio.h>
#define num1 50419

int main ()
{
    int num2;

    do
    {
        printf("Enter a number : ");
        scanf("%d", &num2);

        if(num2-num1 > 100)
        {
            printf("Too High\n");
        }
        else if(num2-num1 < -100)
        {
            printf("Too Low\n");
        }

    }while(num1 != num2);

    return 0;
}
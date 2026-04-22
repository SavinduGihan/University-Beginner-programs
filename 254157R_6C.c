#include <stdio.h>

int main()
{
    int a , b ;

    printf("Enter the value of a and b : ");
    scanf("%d,%d",&a,&b);

    printf("a or b even number: %d\n", a%2 == 0 || b%2 == 0);
    printf("a or b odd numbers : %d\n",a%2 != 0 || b%2 != 0);



    return 0;
}

#include <stdio.h>

int main()
{
    int tempC,tempF;

    printf("Enter the current temperature in celcius : ");
    scanf("%d",&tempC);

    tempF = (tempC * 9/5) + 32 ;

    printf("Current temperature in Fahrenheit : %d\n",tempF);

    return 0;
}

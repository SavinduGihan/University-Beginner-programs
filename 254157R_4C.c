#include <stdio.h>
#define BONUS 5000

int main (void)
{
    double salary = 1000.750 ;
    double tot_salary;
    tot_salary = salary + BONUS;

    printf("Total salary : %.2f\n",tot_salary );
    return 0;
}

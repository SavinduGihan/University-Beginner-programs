#include <stdio.h>

int main() {
    int start, end, units;
    float bill = 0.0;

    printf("Enter Starting Meter Reading: ");
    scanf("%d", &start);
    printf("Enter Ending Meter Reading: ");
    scanf("%d", &end);

    units = end - start;
    printf("Total Units Consumed: %d\n", units);

    if (units <= 50) 
    {
        bill = units * 0.50;
    } else if (units <= 150) 
    {
        bill = 50 * 0.50 + (units - 50) * 0.75;
    } 
    else if (units <= 250) 
    {
        bill = 50 * 0.50 + 100 * 0.75 + (units - 150) * 1.20;
    } 
    else 
    {
        bill = 50 * 0.50 + 100 * 0.75 + 100 * 1.20 + (units - 250) * 1.50;
    }

    float surcharge = bill * 0.20;
    float total = bill + surcharge;

    printf("Units Consumed : %d\n", units);
    printf("Base Charge    : Rs. %.2f\n", bill);
    printf("Surcharge (20%%): Rs. %.2f\n", surcharge);
    printf("Total Bill     : Rs. %.2f\n", total);

    return 0;
}
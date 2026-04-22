#include <stdio.h>

int main()
{
    int accountnumber;
    double initialbalance,withdrawalamount,remainingbalance;

    printf("Enter Your account Number : ");
    scanf("%d",&accountnumber);

    printf("Enter Initial Balance : ");
    scanf("%lf",&initialbalance);

    printf("Enter Withdrawal Amount : ");
    scanf("%lf",&withdrawalamount);

    remainingbalance = initialbalance - withdrawalamount;

    printf("remaining_balance is %.2lf",remainingbalance);

    return 0;
    

}
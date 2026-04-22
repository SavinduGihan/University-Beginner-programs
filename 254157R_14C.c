#include <stdio.h>

float calculateBill() {
    int n;
    float price, total = 0;

    printf("Enter number of items: ");
    scanf("%d", &n);

    for (int i = 1; i <= n; i++) {
        printf("Item %d price: ", i);
        scanf("%f", &price);
        total += price;
    }

    return total;
}

float applyDiscount(float total) {
    float discount = 0;

    if (total >= 10000) {
        discount = total * 0.10;
        printf("Discount: 10%%\n");
    } else if (total >= 5000) {
        discount = total * 0.05;
        printf("Discount: 5%%\n");
    } else {
        printf("No Discount\n");
    }

    return total - discount;
}

int main() {
    int numCustomers;

    printf("Number of customers: ");
    scanf("%d", &numCustomers);

    for (int c = 1; c <= numCustomers; c++) {
        printf("\n-- Customer %d --\n", c);
        float total = calculateBill();
        printf("Total: %.2f\n", total);
        float final = applyDiscount(total);
        printf("Payable: %.2f\n", final);
    }

    return 0;
}
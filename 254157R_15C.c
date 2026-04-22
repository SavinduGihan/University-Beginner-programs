#include <stdio.h>

int checkPrime(int n) {
    if (n <= 1) return 0;
    int i;
    for (i = 2; i * i <= n; i++) {
        if (n % i == 0) return 0;
    }
    return 1;
}

long long getFactorial(int n) {
    long long result = 1;
    int i;
    for (i = 1; i <= n; i++) {
        result *= i;
    }
    return result;
}

void displayMenu() {
    int choice, num;
    
    while (1) {
        printf("\n--- Selection Menu ---\n");
        printf("1. Check Prime\n2. Calculate Factorial\n3. Exit\nChoice: ");
        scanf("%d", &choice);

        if (choice == 3) {
            break;
        }

        printf("Enter a number: ");
        scanf("%d", &num);

        if (choice == 1) {
            if (checkPrime(num)) {
                printf("%d is a Prime number.\n", num);
            } else {
                printf("%d is not a Prime number.\n", num);
            }
        } else if (choice == 2) {
            printf("Factorial of %d is %lld.\n", num, getFactorial(num));
        } else {
            printf("Invalid selection.\n");
        }
    }
}

int main() {
    displayMenu();
    printf("Program finished.\n");
    return 0;
}
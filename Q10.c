#include <stdio.h>

int main() {
    int amount;
    int transaction_count = 0;
    int total_withdrawn = 0;

    printf("=== ATM Session Started ===\n");
    
    while (1) {
        printf("Enter withdrawal amount (Enter 0 to exit): ");
        scanf("%d", &amount);

        if (amount == 0) {
            break; // Exit loop when user enters 0
        }

        if (amount < 0) {
            printf("Invalid amount. Please enter a positive value.\n");
            continue;
        }

        // Process transaction
        transaction_count++;
        total_withdrawn += amount;
        printf("ATM processed withdrawal of %d Rupees.\n", amount);
    }

    printf("\n=== ATM Session Summary ===\n");
    printf("Total transactions made: %d\n", transaction_count);
    printf("Total amount withdrawn: %d Rupees\n", total_withdrawn);
    printf("Session closed. Thank you!\n");

    return 0;
}

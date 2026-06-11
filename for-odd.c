/*Balancing a checkbook with multiple switch cases*/

#include <stdio.h>

int main(void) {
    int choice;
    double balance = 0.0, amount;
    
    printf("Welcome to the checkbook balancing program!\n");
    
    do {
        printf("\nPlease select an option:\n");
        printf("1. Deposit\n");
        printf("2. Withdraw\n");
        printf("3. Check Balance\n");
        printf("4. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);
        
        switch (choice) {
            case 1:
                printf("Enter the amount to deposit: ");
                scanf("%lf", &amount);
                balance += amount;
                printf("Deposit successful! New balance: $%.2lf\n", balance);
                break;
            case 2:
                printf("Enter the amount to withdraw: ");
                scanf("%lf", &amount);
                if (amount > balance) {
                    printf("Insufficient funds! Withdrawal failed.\n");
                } else {
                    balance -= amount;
                    printf("Withdrawal successful! New balance: $%.2lf\n", balance);
                }
                break;
            case 3:
                printf("Current balance: $%.2lf\n", balance);
                break;
            case 4:
                printf("Thank you for using the checkbook balancing program. Goodbye!\n");
                break;
            default:
                printf("Invalid choice! Please try again.\n");
        }
    } while (choice != 4); // <-- FIXED: Added the missing closing bracket and loop condition
    
    return 0;
}
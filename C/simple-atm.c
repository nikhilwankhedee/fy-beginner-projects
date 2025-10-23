#include <stdio.h>

int main() {
    int current = 10000, acc_no, deposit, withdrawal, choice;
    char a;

    printf("\nPlease Enter Your Account Number: ");
    scanf("%d", &acc_no);

    if (acc_no == 9201) {
        printf("\nThanks for using our ATM!\n");
        printf("Press 1 to view your current account balance.\n");
        printf("Press 2 to withdraw money from your account.\n");
        printf("Press 3 to deposit money into your account.\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                printf("\nYour current account balance is: %d\n", current);
                break;

            case 2:
                printf("\nEnter the amount you'd like to withdraw: ");
                scanf("%d", &withdrawal);
                if (withdrawal > current) {
                    printf("Insufficient balance!\n");
                } else {
                    current -= withdrawal;
                    printf("\nYou've successfully withdrawn: %d\n", withdrawal);
                    printf("Your current balance is: %d\n", current);
                }
                break;

            case 3:
                printf("\nEnter the amount you'd like to deposit: ");
                scanf("%d", &deposit);
                current += deposit;
                printf("\nYou've successfully deposited: %d\n", deposit);
                printf("Your current balance is: %d\n", current);
                break;

            default:
                printf("\nInvalid choice!\n");
        }
    } else {
        printf("\nYou've entered the wrong account number!\n");

    }

    return 0;
}

#include <stdio.h>
#include <string.h>

// Function to create an account
void createAccount(char accountNumber[], char accountHolder[], double *accountBalance) {
    printf("Enter Account Number  : ");
    scanf("%s", accountNumber);
    printf("Account Holder Name   : ");
    scanf("%s", accountHolder);
    printf("Initial Deposit Amount: $");
    scanf("%lf", accountBalance);
}

// Function to deposit money
void deposit(double *accountBalance) {
    double amount;
    printf("Enter amount to deposit: $");
    scanf("%lf", &amount);
    *accountBalance += amount;
    printf("Deposit Successful...\n\n");
}

// Function to withdraw money
void withdraw(double *accountBalance) {
    double amount;
    printf("Enter amount to withdraw: $");
    scanf("%lf", &amount);
    if (amount <= *accountBalance) {
        *accountBalance -= amount;
        printf("Withdrawal Successful...\n\n");
    } else {
        printf("Insufficient balance. Withdrawal failed...\n\n");
    }
}

// Function to check account balance
void checkBalance(char accountNumber[], char accountHolder[], double accountBalance) {
    printf("Account Number : %s\n", accountNumber);
    printf("Account Holder : %s\n", accountHolder);
    printf("Balance Amount : $%.2lf\n", accountBalance);
}

int main() {
    printf("\n-------------------------------------------------------------------------------\n");
    printf("*************************** Welcome to our banking ****************************\n");
    printf("*******************************************************************************\n");

    char accountNumber[20];
    char accountHolder[50];
    double accountBalance = 0.0;
    int choice;

    while (1) {
        printf("\n**** CREATE ACCOUNT **** DEPOSIT **** WITHDRAW **** CHECK BALANCE **** EXIT ***\n");
        printf("*******   1   *************  2   *******  3   *********  4   *******   5   ****\n");
        printf("-------------------------------------------------------------------------------\n");
        printf("\nChoose an option: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                createAccount(accountNumber, accountHolder, &accountBalance);
                break;
            case 2:
                deposit(&accountBalance);
                break;
            case 3:
                withdraw(&accountBalance);
                break;
            case 4:
                checkBalance(accountNumber, accountHolder, accountBalance);
                break;
            case 5:
                printf("Exiting...\n");
                return 0;
            default:
                printf("Invalid choice. Please try again.\n\n");
        }
    }

    return 0;
}

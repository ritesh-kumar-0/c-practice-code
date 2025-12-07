#include <stdio.h>

int main() {
    int pin = 1234;          // Default PIN
    int enteredPin;
    float balance = 10000.0; // Starting balance
    float amount;
    int choice;
    int tries = 0;
    int oldPin, newPin, confirmPin;

    printf("=================================\n");
    printf("       WELCOME TO MY ATM        \n");
    printf("=================================\n");

    // ----------- PIN VERIFICATION -----------
    while (tries < 3) {
        printf("Enter your 4-digit PIN: ");
        scanf("%d", &enteredPin);

        if (enteredPin == pin) {
            printf("Login successful!\n");
            break;
        } else {
            printf("Wrong PIN. Try again.\n");
            tries++;
        }
    }

    if (tries == 3) {
        printf("Too many wrong attempts. Your card is blocked.\n");
        return 0;  // End program
    }

    // ----------- MAIN MENU -----------
    do {
        printf("\n========== ATM MENU ==========\n");
        printf("1. Check Balance\n");
        printf("2. Deposit Money\n");
        printf("3. Withdraw Money\n");
        printf("4. Change PIN\n");
        printf("5. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
            // ----- CHECK BALANCE -----
            case 1:
                printf("\nYour current balance is: %.2f\n", balance);
                break;

            // ----- DEPOSIT MONEY -----
            case 2:
                printf("\nEnter amount to deposit: ");
                scanf("%f", &amount);

                if (amount > 0) {
                    balance += amount;
                    printf("Amount deposited successfully!\n");
                    printf("Updated balance: %.2f\n", balance);
                } else {
                    printf("Invalid amount. Deposit failed.\n");
                }
                break;

            // ----- WITHDRAW MONEY -----
            case 3:
                printf("\nEnter amount to withdraw: ");
                scanf("%f", &amount);

                if (amount <= 0) {
                    printf("Invalid amount. Try again.\n");
                } else if (amount > balance) {
                    printf("Insufficient balance! Transaction failed.\n");
                } else {
                    balance -= amount;
                    printf("Please collect your cash.\n");
                    printf("Remaining balance: %.2f\n", balance);
                }
                break;

            // ----- CHANGE PIN -----
            case 4:
                printf("\nEnter your current PIN: ");
                scanf("%d", &oldPin);

                if (oldPin == pin) {
                    printf("Enter new 4-digit PIN: ");
                    scanf("%d", &newPin);
                    printf("Confirm new PIN: ");
                    scanf("%d", &confirmPin);

                    if (newPin == confirmPin) {
                        pin = newPin;
                        printf("PIN changed successfully!\n");
                    } else {
                        printf("PIN mismatch. PIN not changed.\n");
                    }
                } else {
                    printf("Wrong current PIN. Cannot change PIN.\n");
                }
                break;

            // ----- EXIT -----
            case 5:
                printf("\nThank you for using our ATM. Goodbye!\n");
                break;

            default:
                printf("\nInvalid choice. Please try again.\n");
        }

    } while (choice != 5);

    return 0;
}

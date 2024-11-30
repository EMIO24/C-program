#include <stdio.h>
struct var
{
     int a, bal, num, wit;
};

int main()
{
    printf("Welcome to the ATM System\n");
    printf("\n-------------------------");
    struct var var1;

    while(1)
    {
        printf("\n-------------------------\n"
               "1. Deposit\n"
               "2. Withdraw\n"
               "3. Check Balance\n"
               "4. Exit\n"
               "Enter your choice: \n");
        scanf("%d", &var1.num);
        switch(var1.num)
        {
        case 1:
            printf("Enter the amount to deposit: ");
            scanf("%d", &var1.a);
            if (var1.a > 0){
            var1.bal = var1.bal + var1.a;
            printf("Deposit successful! New balance: $%d\n", var1.bal);}
            else
                printf("Invalid deposit amount. Please enter a positive value.\n");
            break;

        case 2:
            printf("Enter the amount to withdraw: ");
            scanf("%d", &var1.wit);
            if(var1.wit <= var1.bal && var1.wit >= 0){
            var1.bal = var1.bal - var1.wit;
            printf("Withdrawal successful! New balance: $%d\n", var1.bal);}
            else
                printf("Insufficient funds! Your balance is: $%d\n", var1.bal);
            break;

        case 3:
            printf("Your current balance is: $%d\n", var1.bal);
            break;

        case 4:
            printf("Thank you for using the ATM system. Goodbye!\n");
            return 0;


        default:
            printf("Invalid number");
        }
    }
    return 0;
}

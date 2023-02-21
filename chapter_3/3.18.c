#include <stdio.h>

int main(void){

    int account_number;
    float beginning_balance;
    float total_charges;
    float total_credits;
    float credit_limit;

    float new_balance;

    printf("Enter account number (-1 to quit): ");
    scanf("%d", &account_number);

    while(account_number!=-1){
        printf("Enter beginning balance: ");
        scanf("%f", &beginning_balance);

        printf("Enter total charges: ");
        scanf("%f", &total_charges);

        printf("Enter total credits: ");
        scanf("%f", &total_credits);

        printf("Enter credit limit: ");
        scanf("%f", &credit_limit);

        new_balance =beginning_balance + total_charges - total_credits;


        if(new_balance>credit_limit){
            printf("Account: %d\n", account_number);
            printf("Credit Limit: %.2f\n", credit_limit);
            printf("Balance: %.2f\n", new_balance);
            printf("Credit Limit Exceeded");
        }

        printf("\n\nEnter account number (-1 to quit): ");
        scanf("%d", &account_number);
    }

    return 0;
}
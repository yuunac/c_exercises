#include <stdio.h>

int main(void){

    int account_number;
    float credit_limit;
    float current_balance;



    for(int i = 1; i<=3; i++){

        printf("Enter account number: ");
        scanf("%d", &account_number);
        
        printf("Enter credit limit: ");
        scanf("%f", &credit_limit);

        printf("Enter current balance: ");
        scanf("%f", &current_balance);

        float new_credit_limit = credit_limit/2;

        printf("\n\n");
        if(new_credit_limit<current_balance){
            printf("Account Number: %d\nOld Credit Limit: %f\nNew Credit Limit: %f\nCurrent Balance: %f\n", account_number, credit_limit, new_credit_limit, current_balance);
            printf("Credit Limit Exceeded\n\n\n");
        }
    }

    return 0;
}
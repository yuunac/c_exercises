#include <stdio.h>

int main(void){

    float loan_principal;
    float interest_rate;
    int days;

    float interest;

    printf("Enter loan principal (-1 to end): ");
    scanf("%f", &loan_principal);

    while(loan_principal!=-1){
        printf("Enter interest rate: ");
        scanf("%f", &interest_rate);

        printf("Enter term of the loan in days: ");
        scanf("%d", &days);

        interest = (loan_principal*interest_rate*days)/365;
        printf("The interest charge is $%.2f\n\n", interest);

        printf("Enter loan principal (-1 to end): ");
        scanf("%f", &loan_principal);
    }

    return 0;
}
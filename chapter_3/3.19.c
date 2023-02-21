#include <stdio.h>

int main(void){

    float sales;
    int base = 200;

    float salary;

    printf("Enter sales in dollars (-1 to end): ");
    scanf("%f", &sales);

    while(sales !=-1){
        salary = base + (9*sales)/100;

        printf("Salary is : $%.2f\n\n", salary);

        printf("Enter sales in dollars (-1 to end): ");
        scanf("%f", &sales);
    }

    return 0;
}
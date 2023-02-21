#include <stdio.h>

int main(void){

    int hours;
    int base_hours=40;
    float hourly_rate;

    printf("Enter # of hours worked (-1 to end): ");
    scanf("%d", &hours);
    float salary;

    while(hours!=-1){

        printf("Enter hourly rate of the worker($00.00): ");
        scanf("%f", &hourly_rate);

        if(hours<=40){
            salary = hours*hourly_rate;
        } else {
            float difference  = hours - base_hours;
            float product = difference*hourly_rate + (difference*hourly_rate)/2;

            salary = base_hours*hourly_rate + product;
        }

        printf("Salary is %.2f\n\n", salary);

        printf("Enter # of hours worked (-1 to end): ");
        scanf("%d", &hours);

    }

    return 0;
}
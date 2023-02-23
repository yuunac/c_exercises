#include <stdio.h>

int main(void){

    int number;
    float salary;

    printf("This program helps you to calculate the salary of your employees\n");
    
    printf("Enter code of your employee: ");
    scanf("%d", &number);

    while(number!=-1){

        switch(number){
            //manager
            case 1:
                salary = 3000;
                printf("The salary of your manager is %.2f\n", salary);
                break;
            //lavoratori a ore
            case 2:
                int hours;
                int hourly_pay = 20;
                printf("Enter hours of work: ");
                scanf("%d", &hours);

                if(hours <=40){
                    int difference = hours - 40;
                    salary = hourly_pay * hours;
                    salary = hourly_pay * 40 + hourly_pay * 1.5 * difference;
                    printf("The salary of your hourly employee is %.2f\n", salary);
                } else if(hours>40){

                    printf("The salary of your hourly employee is %.2f\n", salary);
                }
                break;
            //lavoratori a provvigione
            case 3:
                int base = 250;
                int sells;
                salary = base + (5.7*sells)/100;
                printf("Enter employees' sales: ");
                scanf("%d", &sells);
                printf("The salary of your hourly employee is %.2f\n", salary);
                break;
            //lavoratori a cottimo
            case 4:
                int product;
                float price = 2.50;
                salary = product *price;
                printf("Insert how many products you sold: ");
                scanf("%d", &product);
                printf("The salary of your hourly employee is %.2f\n", salary);
                break;

            default:
                printf("ERROR.\n");
                break;
        }
        printf("Enter code of your employee: ");
        scanf("%d", &number);
    }

    return 0;
}
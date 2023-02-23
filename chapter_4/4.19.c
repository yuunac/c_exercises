#include <stdio.h>

int main(void){

    int product_number;
    int selled_units;

    int item_one = 0;
    int item_two = 0;
    int item_three = 0;
    int item_four = 0;
    int item_five = 0;

    float sum=0;

    printf("Enter product number: ");
    scanf("%d", &product_number);
    
    while(product_number!=-1){

        switch(product_number){
            case 1:
                printf("Enter selled units: ");
                scanf("%d", &selled_units); 
                item_one+=selled_units;
                break;
            case 2:
                printf("Enter selled units: ");
                scanf("%d", &selled_units); 
                item_two+=selled_units;
                break;
            case 3:
                printf("Enter selled units: ");
                scanf("%d", &selled_units); 
                item_three+=selled_units;
                break;
            case 4:
                printf("Enter selled units: ");
                scanf("%d", &selled_units); 
                item_four+=selled_units;
                break;
            case 5:
                printf("Enter selled units: ");
                scanf("%d", &selled_units); 
                item_five+=selled_units;
                break;
            default:
                printf("ERROR. Enter product number: ");
        }

        printf("Enter product number: ");
        scanf("%d", &product_number);
    }

    sum = item_one * 2.98 + item_two * 4.50 + item_three * 9.98 + item_four * 4.49 + item_five * 6.87;

    printf("You cashed out %.2f", sum);
    return 0;
}
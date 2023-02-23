#include <stdio.h>

int main(void){

    int number;
    int i;
    int sum = 0;
    int counter = 1;

    printf("How many numbers do you want to sum?\n");
    scanf("%d", &i);

    while(counter<=i){
        printf("Enter the number you want to sum: ");
        scanf("%d", &number);
        sum+=number;
        counter++;
    }

    printf("The sum of your numbers is %d", sum);

    return 0;
}
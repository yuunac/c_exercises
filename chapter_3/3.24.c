#include <stdio.h>

int main(void){

    int counter=1;
    int number;
    int largest;

        printf("Insert a number: ");
        scanf("%d", &number);

        largest = number;

    while(counter<10){

        printf("Insert a number: ");
        scanf("%d", &number);

        if(number>largest){
            largest = number;
        }

        counter++;
    }

    printf("Largest is %d", largest);

    return 0;
}
/*Ricerca del maggiore e minore*/

#include <stdio.h>

int main(void){

    int num1;
    int num2;

    printf("Please, insert a number\n");
    scanf("%d", &num1);

    printf("Please, insert another number\n");
    scanf("%d", &num2);

    if(num1>num2){
        printf("%d is larger.\n", num1);
    } else if(num2>num1){
        printf("%d is larger.\n", num2);
    } else {
        printf("These numbers are equal.\n");
    }

    return 0;
}
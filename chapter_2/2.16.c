#include <stdio.h>

int main(void){
    int num1;
    int num2;

    printf("Please, send me a number\n");
    scanf("%d", &num1);
    printf("Please, send me another number\n");
    scanf("%d", &num2);


    int sum = num1+num2;
    int difference = num1-num2;
    int product = num1*num2;
    float quotient = num1/num2;

    printf("Sum is %d\n", sum);
    printf("Difference is %d\n", difference);
    printf("Product is %d\n", product);
    printf("Quotient is %.2f\n", quotient);

    return 0;

}
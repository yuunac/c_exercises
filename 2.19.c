#include <stdio.h>

int main(void){

    int num1;
    int num2;
    int num3;

    int sum;
    float average;
    int product;

    printf("Input three different integers: ");
    scanf("%d %d %d", &num1, &num2, &num3);

    sum = num1+num2+num3;
    average = (num1+num2+num3)/3;
    product = num1*num2*num3;


    printf("Sum is %d\n", sum);
    printf("Average is %.2f\n", average);
    printf("Product is %d\n", product);

    if(num1>num2){
        if(num1>num3){
            printf("Largest is %d\n", num1);
        }
    }

    if(num2>num1){
        if(num2>num3){
            printf("Largest is %d\n", num2);

        }
    }

    if(num3>num1){
        if(num3>num2){
            printf("Largest is %d\n", num3);

        }
    }

    if(num1<num2){
        if(num1<num3){
            printf("Smallest is %d\n", num1);
        }
    }

    if(num2<num1){
        if(num2<num3){
            printf("Smallest is %d\n", num2);
        }
    }

    if(num3<num2){
        if(num3<num1){
            printf("Smallest is %d\n", num3);
        }
    }

    return 0;
}
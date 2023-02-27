#include <stdio.h>

double integerPower(double base, double exponent);

int main(void){

    double number;
    double exp;
    
    printf("Enter a base number: ");
    scanf("%lf", &number);

    printf("Enter an exponent number: ");
    scanf("%lf", &exp);

    printf("The final number is %.2f\n", integerPower(number, exp));

    return 0;

}

double integerPower(double base, double exponent){
    double product = 1;
    for(int i=1; i<=exponent; i++){
        product*=base;
    }

    return product;
}
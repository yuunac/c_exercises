/*Minore tra tre numeri in virgola mobile*/

#include <stdio.h>

float minus(float x, float y, float z);


int main(void){

    float num1, num2, num3;

    printf("Enter a number: ");
    scanf("%f", &num1);

    printf("Enter a number: ");
    scanf("%f", &num2);

    printf("Enter a number: ");
    scanf("%f", &num3);

    printf("Minus between your three numbers is %.2f", minus(num1,num2,num3));

    return 0;
}


float minus(float x, float y, float z){
    
    float minus;
    if(x < y && x < z){
        minus = x;
    } else if (y < x && y < z){
        minus = y;
    } else {
        minus = z;
    }

    return minus;
}
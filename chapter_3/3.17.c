#include <stdio.h>

int main(void){

    float gallons;
    float miles;
    float quot;
    int counter = 0;
    float avg;
    float sum = 0;

    printf("Enter the gallons used (-1 to end): ");
    scanf("%f", &gallons);

    while(gallons!=-1){
        printf("Enter the miles driven (-1 to end): ");
        scanf("%f", &miles);

        quot = miles/gallons;
        printf("The miles/gallons for this tank was %f\n\n", quot);
        counter++;
        sum+=quot;
        
        printf("Enter the gallons used (-1 to end): ");
        scanf("%f", &gallons);
    }

    if(gallons==-1){
        avg = sum/counter;
        printf("The overall average miles/gallon was %f\n", avg);
    }

    return 0;
}
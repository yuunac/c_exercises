#include <stdio.h>

int main(void){

    float radius;
    float area;
    float diam;
    float pi = 3.14159;

    printf("Input a radius value: ");
    scanf("%f", &radius);

    area = radius*radius*pi;
    diam = radius*2;

    printf("Diameter is %.2f, while area is %.2f\n", diam, area);

    return 0;

}
#include <stdio.h>
#include <math.h>

double hypotenuse(double x, double y);

int main(void){

    double cath1;
    double cath2;

    printf("Enter the size of a cathetus: ");
    scanf("%lf", &cath1);

    printf("Enter the size of a cathetus: ");
    scanf("%lf", &cath2);

    printf("The measure of the hypotenuse is %.1f\n", hypotenuse(cath1, cath2));

    return 0;
}

double hypotenuse(double x, double y){

    double hyp2 = x*x + y*y;
    double hypotenuse = sqrt(hyp2);

    return hypotenuse;
}
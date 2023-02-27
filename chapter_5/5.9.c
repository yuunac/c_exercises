#include <stdio.h>

float calculateCharges(float hours);


int main(void){

    float hour1 = 1.5;
    float hour2 = 4.0;
    float hour3 = 24.0;

    printf("Car   Hours   Charge\n");
    printf("1     %.2f      %.2f\n",hour1, calculateCharges(hour1));
    printf("2     %.2f      %.2f\n",hour2, calculateCharges(hour2));
    printf("3     %.2f    %.2f\n",hour3, calculateCharges(hour3));

    return 0;

}

float calculateCharges(float hours){
    float charge;
    if(hours <=3.00){
        charge = 2.00;
    } else if(hours > 3.00){
        float difference = hours - 3.00;
        float residualCharges = 0.50;
        float total = difference*residualCharges;
        charge = 2.00 + total;

        if(hours>19){
            charge = 10.00;
        }
    }

    return charge;
}
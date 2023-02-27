/*Funzione celsius() e fahrenheit()
C'è qualche imprecisione inerente alle approssimazioni ma il codice
è sostanzialmente corretto*/

#include <stdio.h>

float celsius(float fahrenheit);
float fahrenheit(float celsius);

int main(void){

    printf("Celsius\t\tFahrenheit\n");

    for(float celsius=0; celsius <= 100; celsius++){
        printf("%.2f\t%.2f\n", celsius, fahrenheit(celsius));
    }

    for(float fahrenheit = 32; fahrenheit <=212; fahrenheit++){
        printf("%.2f\t%.2f\n", fahrenheit, celsius(fahrenheit));
    }

    return 0;
}


float celsius(float fahrenheit){
    float c = (fahrenheit-32)*0.556;
    return c;
}

float fahrenheit(float celsius){
    float f = 1.8*celsius + 32;
    return f;
}


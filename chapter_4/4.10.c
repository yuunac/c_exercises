#include <stdio.h>

int main(void){

    int i;
    int counter = 0;
    int sum = 0;
    float avg;
    printf("Enter some numbers and I will calculate the average\n");
    scanf("%d", &i);
    
    while(i!=9999){
        sum+=i;
        counter++;
        printf("Enter some numbers and I will calculate the average\n");
        scanf("%d", &i);
    }

   if(i==9999){
        avg = sum/counter;            
        printf("The average is %.2f", avg);
    }

    return 0;
}
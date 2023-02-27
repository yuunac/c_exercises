/*Scrivi funzione perfect() che ci consente di dire se il parametro 
inserito è un numero perfetto*/

#include <stdio.h>

void perfect(int num);

int main() {
    int number = 2;

    //  loop 1 through 1000 to find all the perfect numbers in that range
    while(number <= 1000){
        perfect(number);
        number++;
    }

    return 0;
}


void perfect(int num){
    int sum = 1;

    for(int i=2; i <= num/2; i++){
        if(num%i==0){
            sum+=i;
        }
    }

    if(sum == num){
        printf("%d is a perfect number\n", num);
    }
}
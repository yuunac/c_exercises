#include <stdio.h>

int main(void){

    int sum = 0;

    for(int i=2; i<=30; i++){
        sum+=i;
    }

    printf("The sum of the numbers between 2 and 30 is %d\n", sum);
    return 0;
}
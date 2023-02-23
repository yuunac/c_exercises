#include <stdio.h>

int main(void){

    int product=1;

    for(int i=1; i<=15; i++){
        if(i%2!=0){
            product*=i;
        }
    }

    printf("The product of the numbers between 1 and 15 is %d\n", product);
    return 0;
}
#include <stdio.h>

int main(void){

    int counter = 1;
    printf("N     10*N     100*N     1000*N\n\n");

    while(counter<=10){
        int pcount = counter*10;
        int ccount = counter*100;
        int mcount = counter*1000;

        printf("%d%7d%10d%11d\n", counter, pcount,ccount,mcount);
        counter++;
    }

    return 0;
}
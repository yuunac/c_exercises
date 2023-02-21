#include <stdio.h>

int main(void){

    int a=3;
    int counter=1;

    printf("A\tA+2\tA+4\tA+6\n\n");

    while(counter<=5){
        int sum1 = a + 2;
        int sum2 = a + 4;
        int sum3 = a + 6;
        
        printf("%d\t%d\t%d\t%d\n", a, sum1, sum2, sum3);
        counter++;
        a+=3;
    }

    return 0;
}
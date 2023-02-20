#include <stdio.h>

int main(void){

    int num;

    printf("Input an integer and I'll tell you if it's odd or even\n");
    scanf("%d", &num);

    if(num%2!=0){
        printf("%d is odd\n");
    } else {
        printf("%d is even\n");
    }

    return 0;
}
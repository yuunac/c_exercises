#include <stdio.h>

int even(int x);

int main(void){

    int number;

    printf("Enter a number and I'll tell you if it's even (-1 to quit): ");
    scanf("%d", &number);

    while(number!=-1){
        printf("%d\n", even(number));

        printf("Enter a number and I'll tell you if it's even (-1 to quit): ");
        scanf("%d", &number);
    }

    return 0;


}

int even(int x){
    if(x%2==0){
        return 1;
    } else {
        return 0;
    }
}
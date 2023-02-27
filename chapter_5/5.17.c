#include <stdio.h>

int multiple(int x, int y);


int main(void){

    int number1;
    int number2;

    printf("Enter two numbers (-1 to quit): ");
    scanf("%d%d", &number1, &number2);
        
    printf("%d\n", multiple(number1, number2));


    return 0;

}


int multiple(int x, int y){

    if(y%x==0){
        return 1;
    } else {
        return 0;
    }
}
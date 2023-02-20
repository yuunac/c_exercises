#include <stdio.h>

int main(void){

    int num1,num2;

    printf("Input two integers and I'll tell you if number1 is multiple of number2\n");
    scanf("%d%d", &num1,&num2);

    if(num1%num2==0){
        printf("%d is multiple of %d", num1,num2);
    } else {
        printf("%d is not multiple of %d", num1,num2);
    }

    return 0;
}
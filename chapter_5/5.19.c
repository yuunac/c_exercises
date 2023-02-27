#include <stdio.h>

void side(int l);

int main(void){

    int x;

    printf("Enter the size of one side of a square and I'll surprise you: ");
    scanf("%d", &x);

    side(x);

    return 0;
}

void side(int l){
    int area = l*l;
    for(int i = 1; i<=area; i++){
        printf("*");
        if(i%l==0){
            printf("\n");
        }
    }
}
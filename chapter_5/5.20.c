#include <stdio.h>

void side(int l, char fillCharacter);

int main(void){

    int x;
    char chara;
    
    printf("Enter a character: ");
    scanf("%c", &chara);
    printf("Enter the size of one side of a square and I'll surprise you: ");
    scanf("%d", &x);

    side(x,chara);

    return 0;
}

void side(int l, char fillCharacter){
    int area = l*l;
    for(int i = 1; i<=area; i++){
        printf("%c", fillCharacter);
        if(i%l==0){
            printf("\n");
        }
    }
}
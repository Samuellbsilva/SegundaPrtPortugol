#include <stdio.h>
#include <stdlib.h>

int main(){
    int num1, num2, num3;
    
    printf("Escreva 3 numeros \n");
    scanf("%d", &num1);
    scanf("%d", &num2);
    scanf("%d", &num3);
    
    if(num1>num2 && num1>num3){
        printf("\n O maior número é %d", num1);
    }
    else{
        if(num2>num1 && num2>num3){
            printf("\n O maior número é %d", num2);
        }
        else{
            if(num3>num2 && num3>num1){
                printf("\n O maior número é %d", num3);
            }
        }
    }
}

#include <stdio.h>
#include <stdlib.h>

int main(){
    float num1, num2;
    
    printf("Escreva 2 numeros \n");
    scanf("%f", &num1);
    scanf("%f", &num2);
    
    if(num1>num2)
        printf("O menor numero eh: %.2f", num2);
    else
        printf("O menor numero eh: %.2f", num1);
}

#include <stdio.h>
#include <stdlib.h>

int main(){
    int num1, num2, qnt_pares = 0;
    
    printf("Escreva 2 numeros \n");
    scanf("%d", &num1);
    scanf("%d", &num2);
    
    if (num1 % 2 == 0) {
        qnt_pares++;
    }
    if (num2 % 2 == 0) {
        qnt_pares++;
    }
    
    printf("Quantidade de números pares eh: %d\n", qnt_pares);
}

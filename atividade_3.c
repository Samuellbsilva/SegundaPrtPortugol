#include <stdio.h>
#include <stdlib.h>

int main(){
    int num1, num2, num3, maior, menor, sum;
    
    printf("Escreva 3 numeros \n");
    scanf("%d", &num1);
    scanf("%d", &num2);
    scanf("%d", &num3);
    
    if(num1>num2 && num1>num3){
        maior=num1;
        if(num2<num3){
            menor=num2;
        }
        else{
            menor=num3;
        }
    }
    else{
        if(num2>num1 && num2>num3){
            maior=num2;
            if(num1<num3){
            menor=num1;
        }
            else{
                menor=num3;
            }
        }
        else{
            if(num3>num2 && num3>num1){
                maior=num3;
                if(num2<num1){
                menor=num2;
                }
                else{
                menor=num1;
                }
            }
        }
    }
    
    sum=maior+menor;
    prinf("A soma do maior numero com o menor numero eh: %d", sum);
}

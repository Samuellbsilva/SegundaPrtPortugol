#include <stdio.h>
#include <stdlib.h>

int main() {
    int a, b, c;
    printf("Digite 3 numeros: \n");
    scanf("%d %d %d", &a, &b, &c);
    
    if(a>=b && b>=c)
        printf("**1**");
        if(a==b && b==c)
        printf("**-1**(tambem se encaixa)");
    else if(c>=b && b>=a)
        printf("**-1**");
        else
            printf("**0**");
    //Correção de interpretação(acredito que como quando as 3 variáveis são iguais, se encaixam em 2 condicionais, isso deve ser feito)
    
}

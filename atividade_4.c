#include <stdio.h>
#include <stdlib.h>

int main() {
    int a, b, c;
    int delta;
    printf("Digite os coeficientes a, b e c: \n");
    scanf("%d %d %d", &a, &b, &c);
    
    delta = b * b - 4 * a * c;
    
    if (delta > 0) {
        printf("A equaÃ§Ã£o tem 2 raÃ­zes reais\n");
    } else if (delta == 0) {
        printf("A equaÃ§Ã£o tem 1 raiz real\n");
    } else {
        printf("A equaÃ§Ã£o nÃ£o tem raÃ­zes reais\n");
    }
    printf("Obs.:Coeficiente c deve ser negativo para obter 2 raÃ­zes");
}

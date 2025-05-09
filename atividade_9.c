#include <stdio.h>
#include <stdlib.h>

int main() {
    int a, b, c;
    double delta, x1, x2;
    printf("Digite os coeficientes a, b e c: ");
    scanf("%d %d %d", &a, &b, &c);
    
    delta = b * b - 4 * a * c;
    
    if (delta < 0) {
        printf("Não existem raízes reais.\n");
    } else if (delta == 0) {
        x1 = -b / (2.0 * a);
        printf("A única raiz é: %.2f\n", x1);
    } else {
        x1 = (-b + sqrt(delta)) / (2.0 * a);
        x2 = (-b - sqrt(delta)) / (2.0 * a);
        printf("As raízes são: %.2f e %.2f\n", x1, x2);
    }
}

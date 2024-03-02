#include <stdio.h>
int main() {

    int x, n, produto;

    printf("Digite o valor de x: ");
    scanf("%d", &x);
    printf("Digite o valor de n: ");
    scanf("%d", &n);

    // Calcula o produto de x por 2 elevado a n utilizando operadores binários
    produto = x << n;

    // Imprime o resultado
    printf("O produto de %d por 2 elevado a %d e: %d\n", x, n, produto);

    return 0;
}
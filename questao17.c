#include <stdio.h>
int main() {

    int numero;

    printf("Digite um valor inteiro: ");
    scanf("%d", &numero);

    // Calcula e imprime o valor absoluto do número usando a função abs()
    printf("O valor absoluto de %d e: %d\n", numero, abs(numero));

    return 0;
}

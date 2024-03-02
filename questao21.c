#include <stdio.h>
int main() {

    int numero, digito1, digito2, digito3, numero_inverso;

    printf("Digite um numero de tres digitos: ");
    scanf("%d", &numero);

    // Separa os dígitos do número original
    digito1 = numero / 100;
    digito2 = (numero / 10) % 10;
    digito3 = numero % 10;

    // Reconstrói o número na ordem inversa
    numero_inverso = digito3 * 100 + digito2 * 10 + digito1;

    // Imprime o número original e o número reconstruído na ordem inversa
    printf("Numero original: %d\n", numero);
    printf("Numero na ordem inversa: %d\n", numero_inverso);

    return 0;
}
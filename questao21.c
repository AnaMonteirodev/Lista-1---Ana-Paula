#include <stdio.h>
int main() {
    int num1, num2;

    printf("Digite dois numeros inteiros separados por espaco: ");
    scanf("%d %d", &num1, &num2);

    int resultado = (num1 % num2 == 0);

    printf("O primeiro numero %s multiplo do segundo.\n", resultado ? "e" : "nao e");

    return 0;
}
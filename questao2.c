#include <stdio.h>
int main(){
    int x;
    printf("Digite o valor que sera convertido:\n");
    scanf("%d\n", &x);

    // Imprime o valor em hexadecimal
    printf("Hexadecimal: %X\n", x);

    // Imprime o valor em octal
    printf("Octal: %o\n", x);

}
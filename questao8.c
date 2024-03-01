#include <stdio.h>
int main (){
    int valor;

    printf("Digite um numero inteiro:\n");
    scanf("%d", &valor);

// Calcular o quadrado do valor fornecido

    valor = valor * valor;
    printf("O quadrado do valor fornecido e: %d\n", valor);
}
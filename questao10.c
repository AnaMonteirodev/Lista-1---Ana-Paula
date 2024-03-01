#include <stdio.h>
int main (){

    int volume, comprimento, largura, altura;

    printf("Digite o valor do comprimento:\n");
    scanf("%d", &comprimento);

    printf("Digite o valor da largura:\n");
    scanf("%d", &largura);

    printf("Digite o valor do altura:\n");
    scanf("%d", &altura);

    // Calcular o valor do volume pela fórmula.
    volume = comprimento*largura*altura;

    printf("O volume de uma caixa retangular e: %d\n", volume);

}
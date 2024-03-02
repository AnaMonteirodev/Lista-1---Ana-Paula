#include <stdio.h>
int main (){
    float valor_real, cotacao_dolar, valor_dolar;

    printf("Digite o valor em real que deseja converter:\n");
    scanf("%f", &valor_real);

    printf("Digite a cotacao do dolar no momento:\n");
    scanf("%f", &cotacao_dolar);

    valor_dolar = valor_real*cotacao_dolar;
    printf("O valor convertido e de:%.2f", valor_dolar);
}
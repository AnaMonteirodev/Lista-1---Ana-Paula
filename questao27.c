#include <stdio.h>
#include <math.h>
int main() {

    float num1, num2, num3, media_aritmetica, media_geometrica;

    printf("Digite tres numeros em ponto flutuante separados por espacos: ");
    scanf("%f %f %f", &num1, &num2, &num3);

    // Calcula a média aritmética
    media_aritmetica = (num1 + num2 + num3) / 3;

    // Calcula a média geométrica
    media_geometrica = pow(num1 * num2 * num3, 1.0 / 3.0);

    printf("Media Aritmetica: %.2f\n", media_aritmetica);
    printf("Media Geometrica: %.2f\n", media_geometrica);

    return 0;
}
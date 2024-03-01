#include<stdio.h>
int main(void){
    int horas, minutos, segundos, total_segundos;

    printf("Digite o tempo em horas:\n");
    scanf("%d", &horas);

    printf("Digite os minutos:\n");
    scanf("%d", &minutos);

    printf("Digite os segundos:\n");
    scanf("%d", &segundos);

// Calculando o número de segundos
    total_segundos = horas * 3600 + minutos * 60 + segundos;

    printf("O total de segundos e: %.2d\n", total_segundos);
}
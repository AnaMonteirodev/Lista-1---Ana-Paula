#include <stdio.h>
int main() {

    int tempo_segundos, horas, minutos, segundos;

    printf("Digite o tempo em segundos: ");
    scanf("%d", &tempo_segundos);

    horas = tempo_segundos / 3600;  // 1 hora = 3600 segundos
    minutos = (tempo_segundos % 3600) / 60;  // 1 minuto = 60 segundos
    segundos = tempo_segundos % 60;

    printf("Tempo total: %d horas, %d minutos e %d segundos\n", horas, minutos, segundos);

    return 0;
}
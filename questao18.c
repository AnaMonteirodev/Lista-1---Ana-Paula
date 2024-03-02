#include <stdio.h>
int main() {
    float raio, diametro, circunferencia, area;
    const float pi = 3.14159;

    printf("Digite o raio do circulo: ");
    scanf("%f", &raio);

    diametro = 2 * raio;
    circunferencia = 2 * pi * raio;
    area = pi * raio * raio;

    printf("O diametro do circulo e: %f\n", diametro);
    printf("A circunferencia do circulo e: %f\n", circunferencia);
    printf("A area do circulo e: %f\n", area);

    return 0;
}

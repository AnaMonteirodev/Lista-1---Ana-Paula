#include <stdio.h>
#include <math.h>>
int main() {
    float x1, y1, x2, y2, distancia;

    printf("Digite as coordenadas do primeiro ponto (x1 y1): ");
    scanf("%f %f", &x1, &y1);

    printf("Digite as coordenadas do segundo ponto (x2 y2): ");
    scanf("%f %f", &x2, &y2);

    // Calcula a distância entre os dois pontos usando a fórmula da distância euclidiana
    distancia = sqrt(pow(x2 - x1, 2) + pow(y2 - y1, 2));

    // Imprime o resultado
    printf("A distancia entre os pontos (%.2f, %.2f) e (%.2f, %.2f): %.2f\n", x1, y1, x2, y2, distancia);

    return 0;
}
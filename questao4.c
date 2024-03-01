#include <stdio.h>
int main(){
    float valor;

    printf("Digite o valor:\n");
    scanf("%f", &valor);

    printf("O triplo do valor e: %.1f\n", valor*3);
    printf("O quadrado do valor e: %.1f\n", valor*valor);
    printf("O meio do valor e: %.1f\n", valor/2);
}
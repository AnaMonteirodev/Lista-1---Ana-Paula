#include <stdio.h>
int main(){
   float valor_real;
    printf("Digite o valor real:\n");
    scanf("%f", &valor_real);
    // Conversão para uma casa decimal.
    printf("Valor com uma casa decimal: %.1f\n", valor_real);
}
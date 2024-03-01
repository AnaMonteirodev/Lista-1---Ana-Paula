#include <stdio.h>
int main(){
    float total;
    printf("Digite o valor da conta:\n");
    scanf("%f", &total);
    // Considerando os 10% do gsrçom.
    total = total*0.1+total;
    printf("O valor total da conta com a taxa do garcom e: %.2f\n",total);
}
#include <stdio.h>
int main (){
    float numero_A, numero_B;

    printf("Digite um valor para o numero A:\n");
    scanf("%f", &numero_A);

    printf("Digite um valor para o numero B:\n");
    scanf("%f", &numero_B);

    printf("A soma dos dois numeros tem como resultado:%.1f\n", numero_A+numero_B);
    printf("A subtracao dos dois numeros tem como resultado:%.1f\n",numero_A-numero_B);
    printf("A multiplicacao dos dois numeros tem como resultado:%.1f\n", numero_A*numero_B);
    printf("A divisao dos dois numeros tem como resultado:%.1f\n", numero_A/numero_B);
    printf("O resto da divisao dos dois numeros tem como resultado:%.2f\n",(float)((int)numero_A%(int)numero_B));
}
#include <stdio.h>
int main(){

    float peso, altura, peso_ideal;
    char sexo;

    printf("Digite o peso:\n");
    scanf("%f", &peso);

    printf("Digite a altura:\n");
    scanf("%f", &altura);

    getchar();
    printf("Digite o sexo(H ou M):\n");
    scanf("%c", &sexo);

    if (sexo =='H'){
        peso_ideal = 72.7*altura-58;
        printf("O peso ideal e: %.2f\n", peso_ideal);
    } else if (sexo=='M'){
    peso_ideal = 62.1*altura-44.7;
    printf("O peso ideal e: %.2f\n", peso_ideal);
    } else{
        printf("Erro ao identificar o sexo!");
    }
    }
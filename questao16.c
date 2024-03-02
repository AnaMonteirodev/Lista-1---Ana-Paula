#include <stdio.h>
int main (){

    float valor_hora, horas_trabalhadas, desconto_INSS, salario_liquido;

    printf("Digite o valor da hora aula:\n");
    scanf("%f", &valor_hora);

    printf("Digite o valor de horas trabalhadas no mes:\n");
    scanf("%f", &horas_trabalhadas);

    printf("Digite o percentual de desconto do inss:\n");
    scanf("%f", &desconto_INSS);

    printf("O salario liquido e de: %.2f\n", salario_liquido = valor_hora*horas_trabalhadas);
    printf("O salario bruto com desconto aplicado e de: %.2f\n", (salario_liquido-(salario_liquido*desconto_INSS/100)));

    return 0;
}
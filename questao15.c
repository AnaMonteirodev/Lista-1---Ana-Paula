#include <stdio.h>
int main(){

    int dias_trabalhados;
    float salario_bruto;

    printf("Digite o numero de dias trabalhados:\n");
    scanf("%d", &dias_trabalhados);

    salario_bruto = dias_trabalhados*50.25;

    if(dias_trabalhados<=10){
        printf("Nao tem direito a gratificacao! O salario liquido com desconto e de: %.2f\n", (salario_bruto-(salario_bruto*0.1)));
    } else if (dias_trabalhados>10 && dias_trabalhados <=20){
        printf("Salario  liquido com a gratificacao de 20%: %.2f\n", ((salario_bruto*0.2)-0.1));
    } else if(dias_trabalhados>20){
        printf("Salario liquido com a gratificacao de 30%: %.2f\n", ((salario_bruto*0.3)-0.1));
    }
}
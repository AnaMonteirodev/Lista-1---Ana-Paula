#include <stdio.h>
int main(){
    int x,y;

    printf("Digite o valor de x:\n");
    scanf("%d", &x);

    printf("Digite o valor de y:\n");
    scanf("%d", &y);

    x = x ^ y;
    y = x ^ y;
    x = x ^ y;

    printf("x = %u\ny = %u\n",x,y);

}
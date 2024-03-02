#include <stdio.h>
int main (){
    float celsius;

    printf("Digite a temperatura em celsius:\n");
    scanf("%f", &celsius);

   printf("A temepratura em fahrenheit e de: %.2f\n", ((9*celsius+160)/5));
   
   return 0;
}
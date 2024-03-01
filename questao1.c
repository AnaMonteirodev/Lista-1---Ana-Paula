#include <stdio.h>
int main (){
    int A,B,C;
    //Primeira expressão: A = 7+3*6/2-1
    //Primeiro serão executadas as multiplicações e divisões, e depois as adições e subtrações.
      printf("Primeira expresao: A = 7+3*6/2-1\n");
       A = 7+3*6/2-1;
      printf("O resultado da expressao e: %.2d\n", A);
    //Segunda expressao expressão:  x = 2%2 + 2*2-2/2;
    //Ordem dos operadores: Operador de módulo, Multiplicação, Divisão, Adição, Subtração.
      printf("Segunda expressao: B = 2%2+2*2-2/2\n");
       B = 2%2 + 2*2-2/2;
      printf("O resultado da expressao e: %.2d\n", B);
    //Terceira expressão: x = (3 * 9 * (3 + (9*3/ (3) ) ) ); 
    //Ordem dos operadores: Parênteses, Multiplicação, Divisão, Adição. 
      printf("Terceira expressao: C = (3 * 9 * (3 + (9*3/ (3) ) ) )\n");
       C = (3 * 9 * (3 + (9*3/ (3) ) ) );
      printf("O resultado da expressao e: %.2d\n", C);
}
#include <stdio.h>

int main(){
    int *pti;
    int i=10;
    pti=&i;
    *pti=20; //muda conteudo de onde esta apontando
    printf("%p \n", pti); //endere�o
    printf("%i \n", *pti); //conteudo da variavel apontada
    printf("%i", i);
}

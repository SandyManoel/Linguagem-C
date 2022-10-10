   #include <stdio.h>
   #include "ex 4 1509 funcao include.c"
    int main(){
    char string[31];
    int i=0;
    printf("Informe um texto: ");
    scanf("%[^\n]", string);
    printf("\nString Digitada: %s \n", string);
    funcaoStrlen(string); //chama funcao endereço de onde começa
    int cont = funcaoStrlen(string);
        printf("Quantidade de caracteres da string %s: %d \n", string, cont);
    }

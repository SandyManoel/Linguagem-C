#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include<ctype.h>
//quantidade de vezes que repete 1 caracter
int main(){
    char palavra[20], caracter;
    int qtdeRepete=0,i;

    printf("Escreva uma palavra: ");
    gets(palavra);

    printf("Escreva um caracter: ");
    scanf("%c", &caracter);

    for (i=0;i<strlen(palavra);i++){
        if(toupper(palavra[i]==caracter)){
            qtdeRepete++;
        }
    }
    printf("Quantidade de vezes que repete o caracter digitado:  %i", qtdeRepete);
}

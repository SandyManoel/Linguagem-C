#include <stdio.h>
#include <ctype.h>
#include <stdlib.h>
#include <string.h>
//CRIAR UMA FUNÇÃO QUE RECEBA COMO PARAMETRO UMA STRING E UM CARACTER E VERIFIQUE SE O CARACTER EXISTE NA STRING, SE EXISTIR A FUNÇÃO RETORNA 1, SE NÃO RETORNA 0
int achaCaracter(char string[21], char letra)//pode usar outro nome se quiser mas tem que passar os valores
{
    int i;
    for (i=0;i<strlen(string);i++)
        {
    if (string[i]==letra){
        return 1;
    }
    }
    return 0;
}

int main(){
    char string[21];
    char letra;

    printf("\nInforme uma string: ");
    gets(string);

    printf("\nInforme um caracter: ");
    scanf("%c", &letra);

    int achou = achaCaracter(string, letra); //passar na mesma ordem
    printf("Retornou %i",achou);
}

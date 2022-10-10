#include <stdio.h>
#include <ctype.h>
#include <stdlib.h>
#include <string.h>

/*Crie uma função substring que receba duas strings e dois números inteiros (correspondentes às posições da cópia)
 A função deverá copiar na string2 parte da string1 de acordo com as posições.*/

 //ou seja, ela pega o inicio e fim e escreve pro usuario o que esta nas posições desde o incio até o fim que ela escrever
int main(){
    char string1[30],string2[30];
    int inicio, fim;
    printf("Informe a primeira String: ");
    gets(string1);
    printf("Informe o inicio e o fim: ");
    scanf("%i %i", &inicio, &fim);
    substring(string1, string2,inicio, fim); //chama funcao
    printf("A string 2 e : %s", string2);

}

void substring(char string1[30], char string2[30], int inicio, int fim){
    int i,j=0;
    for(i=inicio;i<=fim;i++){
        string2[j] = string1[i];
        j++;
    }
    string2[j]='\0';
}

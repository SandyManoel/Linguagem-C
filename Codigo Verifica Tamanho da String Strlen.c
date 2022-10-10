#include <stdio.h>
#include <string.h>

//verifica tamanho da string e escreve para o usuario
int main(){
    int i;
    char nome[21];

    printf("Informe um nome:");
    //scanf("%s", nome);  //%s não lê espaço (lê vetor de char)
    gets(nome);  //recebe conjunto de caracteres de uma vez
    printf("O nome digitado foi: %s", nome);

    //forma para dizer que acabou a matriz colocar \0 no final p dizer que acabou, precisamos saber tamanho do que foi digitado.

    printf("\nTamanho da String: %i", strlen(nome));
    printf("\n");

    for (i=0;i<strlen(nome);i++){ //0 até 20 – no loop, dai vai qualquer coisa além "sandy" digita "sandy $#5....", pq falta \0
        printf("%c", nome[i]);
    }

}

/*2. Faça um programa para criptografar uma frase dada pelo usuário.
a) crie uma função que receba a string, inverta a frase e troque as consoantes por #. (A própria string passada como argumento deverá ser alterada). Use notação ponteiro.
b) Chame a função no main, criando as variáveis necessárias
Exemplo:
Frase: EU ESTOU NA ESCOLA
Saída: A#O##E A# UO##E EU*/

#include <stdio.h>
#include <ctype.h>
#include <string.h>

char inverte_string(char frase[]){
    char frase_invertida[25], *p;
    int i,j, tam = 0;


    tam = strlen(frase); //pega o tamanho da frase
    p = frase + tam - 2; //coloca no ponteiro a frase
    printf("%s",p);

    for(i = 0; i < tam; i++){
        frase_invertida[i] = *p;
        p--;
        printf("%s", p);
    }



      for(i = 0; i < strlen(frase_invertida); i++){
       if(toupper(frase_invertida[i])=='A' ||
           toupper(frase_invertida[i])=='E'||
         toupper(frase_invertida[i])=='I'||
         toupper(frase_invertida[i])=='O'||
           toupper(frase_invertida[i])=='U'){
          frase_invertida[i]=frase_invertida[i];
          }
          else{
          frase_invertida[i]='#';
          }
           printf("%c", frase_invertida[i]);
            //frase=frase_invertida[i];

}
}

int main(){
    char frase[25];
    printf("Digite a frase: ");
    fgets(frase, 25, stdin);
    inverte_string(frase);

}



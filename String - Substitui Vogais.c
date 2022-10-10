#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <ctype.h>

//verifica a quantidade de vogais que tem na palavra e pede para o usuario informar qual caracter quer que coloque no lugar das vogais

int main(){
    char frase[31], caracter, vogais;
    int qtdevogal=0,i;

    printf("Informe uma frase: " );
    gets(frase);

    for(i=0;i<strlen(frase);i++){
        if(toupper(frase[i])=='A'||
           toupper(frase[i])=='E'||
           toupper(frase[i])=='I'||
           toupper(frase[i])=='0'||
           toupper(frase[i]=='U')){
        qtdevogal++;
        }
    }

    printf("Qtde de vogal: %i", qtdevogal);
    printf("\nInforme um caracter: ");
    scanf("%c",&caracter);

    if ((caracter >= 'a' && caracter <= 'z') || (caracter >= 'A' && caracter <= 'Z')){
        for(i=0;i<strlen(frase);i++){
            if(toupper(frase[i])=='A'||
            toupper(frase[i])=='E'||
            toupper(frase[i])=='I'||
            toupper(frase[i])=='0'||
            toupper(frase[i]=='U')){
                frase[i]=caracter;
        }
        }
        printf("A palavra ficou %s ", frase);
    }
    else{
        printf("\nO caracter deve ser uma consoante ou vogal");
    }
}

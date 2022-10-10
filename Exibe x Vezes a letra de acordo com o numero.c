#include <stdio.h>

//digita as letras a quantidade de vez que digitou, exemplo digitou numero 3 e a letra a, digita a 3 vezes (aaa)
    int main()
    {
        int Numeros[6],i,j;
        char Char[6];

        for(i=0;i<6;i++){
            printf("Digite os numeros: ");
            scanf("%i", &Numeros[i]);
        }
        i=0;

        for (i=0;i<6;i++){
            printf("Digite as letras: ");
            scanf(" %c", &Char[i]);
        }
        printf("\n");

        for (i=0;i<6;i++){
            for(j=0;j<Numeros[i];j++){
                printf("%c", Char[i]);
            }
            printf("\n");
        }


    }

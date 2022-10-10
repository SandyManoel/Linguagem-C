
#include <stdio.h>
//exibe matriz transposta
int main(){
    int Tab[5][5],Trans[5][5], l, c;

    for(l=0;l<=4;l++){
        for(c=0;c<=4;c++){
        printf("Digite os numeros da matriz: ");
        scanf("%i", &Tab[l][c]);
        }
    }

    for(l=0;l<=4;l++){
        for(c=0;c<=4;c++){
        Trans[c][l] = Tab[l][c];
        }
    }

    for(l=0;l<=4;l++){
        for(c=0;c<=4;c++){
        printf("%i ",Trans[l][c]);
        }
        printf("\n");
    }
}

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>


int main(){
    int numeros[2001]={0},qtde,entrada;
    printf("Digite a quantidade de numeros: ");
    scanf("%d",&qtde);

        for (; qtde>0;qtde--){
            printf("Digite os numeros:");
            scanf("%d", &entrada);
            numeros[entrada]++;
        }
     funcaoFrequencia(numeros, qtde, entrada);

}

int funcaoFrequencia(int numeros[2000], int qtde, int entrada){
    int i=0, contador=0;
    for(i=0; i<2001; i++){
    if (numeros[i]>0){
        printf("%d aparece %d vez(es) \n", i, numeros[i]);
    }
}
}

int ordena(int numeros[2000], int qtde, int entrada, int tam){
     int minimo, aux, i, j;

     for (i=0; i<=tam-1;i++)
	 {
         minimo = i;
         // pega indice do menor
         for (j=i+1;j<=tam-1;j++)
		 {
             if ( numeros[j] < numeros[minimo] )
			 {
                 minimo = j;
             }
         }
		 //printf("\nIndice do menor: %i",minimo);
         // efetua a troca
		 printf("\ntroca: %.1f  e %.1f",numeros[minimo],numeros[i]);
		 aux = numeros[minimo];
         numeros[minimo] = numeros[i];
         numeros[i] = aux;
     }

}







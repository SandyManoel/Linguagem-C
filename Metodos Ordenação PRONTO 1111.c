#include <stdio.h>

void selecao (int y, int *matrizPar)
{
     int minimo, aux, i, j;
     for (i=0; i<=y-1;i++)
	 {
         minimo = i;
         // pega indice do menor
         for (j=i+1;j<=y-1;j++)
		 {
             if ( matrizPar[j] < matrizPar[minimo] )
			 {
                 minimo = j;
             }
         }
		 aux = matrizPar[minimo];
         matrizPar[minimo] = matrizPar[i];
         matrizPar[i] = aux;
 }
}

void selecaoImpar (int z, int *matrizImpar)
{
     int minimo, aux, i, j;
     for (i=0; i<=z-1;i++)
	 {
         minimo = i;
         // pega indice do menor
         for (j=i+1;j<=z-1;j++)
		 {
             if ( matrizImpar[j] > matrizImpar[minimo] )
			 {
                 minimo = j;
             }
         }
		 aux = matrizImpar[minimo];
         matrizImpar[minimo] = matrizImpar[i];
         matrizImpar[i] = aux;
 }
}

int main(){
    int matriz[199], matrizPar[199], matrizImpar[199];
    int i,x,y=0,z=0, qtdeNumeros;

    printf("Digite quantos numeros da matriz voce quer digitar: ");
    scanf("%i", &qtdeNumeros);
    if(qtdeNumeros>=0 && qtdeNumeros<200){
    for (x=0;x<qtdeNumeros;x++){
        printf("Digite os numeros: ");
        scanf("%i", matriz+x);
    }

    for(x=0;x<qtdeNumeros;x++){
        if(*(matriz+x)%2==0){ //par
            *(matrizPar+y) = *(matriz+x);//anda na matriz e substitui pela posição da matriz
            //printf("%i ", *(matrizPar+y));
            y++;
        }
        else{ //impar
            *(matrizImpar+z)=*(matriz+x);
            z++;
        }
    }

    selecao(y,matrizPar);

     for(i=0;i<y;i++){
        printf("%i \n", *(matrizPar+i));
     }


     selecaoImpar(z,matrizImpar);

     for(i=0;i<z;i++){
        printf("%i \n", *(matrizImpar+i));
     }
    } else{
        printf("Digite um nUmero positivo e menor que 200 ");
    }
}



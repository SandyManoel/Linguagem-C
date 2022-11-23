#include <stdio.h>

void insercao (int tam, float *vetor)
{
    int i,j, y;
	float aux;	
    j=1;
    while (j<=tam-1)
	{
         aux = vetor[j];
         
		 i = j - 1;
         while (  i >= 0 &&  vetor[i] > aux ) 
         {         
           //printf("\ntrocou %i ",vetor[i]);		 		   
		   vetor[i+1] = vetor[i];           
	       i = i - 1;
		   printf("\n                   ");
		   for (y=0;y<tam;y++) printf("%.1f ",vetor[y]);		 
		 }    
        vetor[i+1] = aux;
        j = j + 1;
		printf("\n                   ");
		//for (y=0;y<6;y++) printf("%i ",vetor[y]);		
   }
}

/* Testa algoritmo de ordenação por inserção */

int main ()
{
  int i;
  float v[5] = {10.4,21.5,4.5,3.1,1.2};
  printf("\nVetor desordenado: ");
  for (i=0; i<5; i++)
    printf("%.1f ",v[i]);
  printf("\n");
  insercao(5,v);
  printf("\n");
  printf("\nVetor ordenado   : ");
  for (i=0; i<5; i++) printf("%.1f ",v[i]);
  printf("\n");
return 0;
}


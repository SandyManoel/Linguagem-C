#include <stdio.h>
/* Ordenação bolha */
void bolha (int n, float *v)
{
  int i,j, z;
  float temp;
  for (i=n-1; i>0; i--)
  {
   printf("\n%i looping",i);
   
   for (j=0; j<i; j++)
     if (v[j]>v[j+1]) { /* troca */
       temp = v[j];
       v[j] = v[j+1];
       v[j+1] = temp;
	   printf("\nTroca: %.1f  ",v[j]);
	   printf("com %.1f  ",v[j+1]);
	   for (z=0; z<n; z++) printf("%.1f ",v[z]);
     }
  }
}

/* Testa algoritmo de ordenação bolha */

int main ()
{
  int i;
  float v[5] = {5.0,4.0,1.0,3.0,2.0};
  printf("\nVetor desordenado: ");
  for (i=0; i<5; i++) printf("%.1f ",v[i]);
  bolha(5,v);
  printf("\nVetor ordenado: ");
  for (i=0; i<5; i++) printf("%.1f ",v[i]);
  printf("\n");
return 0;
}


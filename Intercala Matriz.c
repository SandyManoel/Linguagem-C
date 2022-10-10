#include <stdio.h>

int main(){
    int A[25], B[25], C[25], soma, i,j;
    i=0;
    for (i=0;i<=24;i++){
        printf("Digite os numeros do vetor A: ");
        scanf("%i", &A[i]);
    }

    for (j=0;j<=24;j++){
        printf("Digite os numeros do vetor B:");
        scanf("%i", &B[j]);
    }

     for (i=0;i<=24;i++){
      C[i*2]=A[i];
    }
    for (i=0;i<=24;i++){
      C[i*2+1]=B[i];
    }
     for (i=0;i<=24;i++){
      printf("%i", C[i]);
    }
    }


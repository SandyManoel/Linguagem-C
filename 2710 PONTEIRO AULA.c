#include <stdio.h>
int main()
{
int vet[] ={4,9,12};
int i, *ptr;
ptr = vet;
for(i=0;i<3;i++){
    printf("%d", *ptr++);
    printf("%p", ptr);
}
printf("\n\n\n%p", ptr);
}

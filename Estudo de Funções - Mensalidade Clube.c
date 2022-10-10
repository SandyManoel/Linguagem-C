#include <stdio.h>
#include <ctype.h>
#include <stdlib.h>
#include <string.h>
/*Uma pessoa deseja se associar a um clube. O clube possui diferentes tipos de contratos de acordo com a idade do comprador como mostra a tabela abaixo:
>=16 e <20 Paga R$200,00 para se associar e mensalidades de R$30,00, dependentes paga R$10,00 por mês por dependente
>=20 Paga R$300,00 e mensalidades de R$60,00 incluindo dependentes. Caso não tenha dependentes ganha 10% de desconto em metade das mensalidades do ano.
O programa deve solicitar a idade da pessoa e o número de dependentes e calcular o total a ser pago no final de 1 ano ao clube.
O programa deve imprimir o nome do plano, o número de dependentes e o total a ser pago.
Crie uma função para calcular plano Jovem e outra para plano Adulto. */

float planoJovem(int idade, char nome[30], int dependentes);
float planoAdulto(int idade, char nome[30], int dependentes);


int main(){
    int idade, dependentes;
    char nome[30];
    float valorPago;

    printf("Digite seu nome: ");
    gets(nome);

    printf("Digite sua idade: ");
    scanf("%i",&idade);

    printf("Digite a quantidade de dependente: ");
    scanf("%i",&dependentes);

    if (idade>=16 && idade<20){
        valorPago = planoJovem(idade, nome, dependentes);
        printf("Nome do Plano: Jovem \n");
        printf("Numero de dependentes %i \n", dependentes);
        printf("Total a ser pago: %2.f \n", valorPago);
    }
    else if(idade>=20){
        valorPago = planoAdulto(idade, nome, dependentes);
        printf("Nome do Plano: Adulto \n ");
        printf("Numero de dependentes %i \n", dependentes);
        printf("Total a ser pago: %2.f \n ", valorPago);
    }
    else{
        printf("Para esse clube é necessario ser maior de 15 anos");
    }
}

float planoJovem(int idade, char nome[30], int dependentes){

    float valorPago;
    if (dependentes==0){
        valorPago=200+(30*12);
    }
    else{
        valorPago=200+(30*12)+((dependentes*10)*12);
    }
    return valorPago;
}

float planoAdulto(int idade, char nome[30], int dependentes){
    float valorPago;
    if (dependentes==0){
        valorPago=(300+((60*12/2)-0.10));
    }
    else{
        valorPago=200+(30*12)+((dependentes*10)*12);
    }
    return valorPago;
}

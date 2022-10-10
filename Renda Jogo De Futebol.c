#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <stdlib.h>
/*Elaborar um programa que leia o público total de um jogo de futebol e forneça a renda do jogo,
sabendo-se que havia 4 tipos de ingressos assim distribuídos: 10% - popular a 5,00, 50% - geral a 10,00,
30% - arquibancada a 20,00 e 10% de cadeiras a 30,00. Crie uma função que calcule o total da renda. */

float calculoRenda(int publicoTotal, float totalRenda); //declara função no inicio pra não bugar
    int main() {
        int publicoTotal;
        float totalRenda;
        printf("Digite quantas pessoas haviam no jogo de futebol: ");
        scanf("%i", &publicoTotal);
        totalRenda=calculoRenda(publicoTotal, totalRenda); //chama função
        printf("O total da renda do jogo foi de: R$ %2.f", totalRenda);
    }

    float calculoRenda(int publicoTotal, float totalRenda){
        float popular, geral, arqban, cadeiras;

        popular = 0.1*publicoTotal;
        geral = 0.5*publicoTotal;
        arqban = 0.3*publicoTotal;
        cadeiras = 0.1*publicoTotal;

        totalRenda= (popular*5)+(geral*10)+(arqban*20)+(cadeiras*30);
        return totalRenda;
    }

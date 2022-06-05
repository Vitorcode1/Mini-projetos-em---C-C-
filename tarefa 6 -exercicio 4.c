#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

/*
Elabore um programa que permite efetuar opera��es de cr�dito ou d�bito numa conta banc�ria. O
programa dever� perguntar qual o saldo inicial da conta e qual a opera��o que o utilizador pretende
efetuar (d�bito ou cr�dito), assim como o montante a debitar, atualizando o saldo da conta sempre
que se efetue uma opera��o. No final dever� devolver o saldo da conta.
*/

void main(){
    setlocale(LC_ALL,"Portuguese");
    float saldo, debito, credito;
    char option;
    printf("Indique o saldo inicial da conta bancaria:");
    scanf("%f",&saldo);
    fflush(stdin);

    printf("\n\t\t\tOp��o:\t|\tMenu:\t\n");
    printf("\t\t\tD\t|\tDebito\n\t\t\tC\t|\tCredito\n\t\t\tS\t|\tSair\n\n");
    scanf("%c",&option);

    while (option=='D' || option=='d' || option=='C' || option=='c'){
        switch(option){
            case 'D':
            case 'd':
                printf("\tDigite o montante a debitar a conta:");
                scanf("%f", &debito);
                saldo-=debito;
                printf("O seu saldo atual � %.2f euros:\n", saldo);
                break;
            case 'C':
            case 'c':
            printf("\tDigite o montante a creditar a conta:");
                scanf("%f", &credito);
                saldo+=credito;
                printf("O seu saldo atual � %.2f euros:\n", saldo);
                break;
        }
    fflush(stdin);
    printf("\t\t\tD\t|\tDebito\n\t\t\tC\t|\tCredito\n\t\t\tS\t|\tSair\n\n");
    scanf("%c",&option);



    }
    if (option=='s' || option=='S'){
        printf("O saldo da sua conta � %2.f euros", saldo);
    }











}

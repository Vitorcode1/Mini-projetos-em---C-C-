#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

/*
Uma empresa decide dar um aumento aos seus funcion�rios de acordo com uma tabela que
considera o sal�rio atual e o tempo de servi�o de cada funcion�rio. Os funcion�rios com menor sal�rio
ter�o um aumento proporcionalmente maior do que os funcion�rios com um sal�rio maior, e
conforme o tempo de servi�o na empresa, cada funcion�rio ir� receber um b�nus adicional de sal�rio.
Fa�a um programa que leia:
-> o valor do sal�rio atual do funcion�rio;
-> o tempo de servi�o deste funcion�rio na empresa (quantidade de anos de trabalho na empresa).
Use a tabela para calcular o sal�rio reajustado deste funcion�rio e mostre o valor do sal�rio final
reajustado, ou uma mensagem caso o funcion�rio n�o tenho direito a aumento.
*/


void main(){
    setlocale(LC_ALL,"Portuguese");
    char nome[50];
    float salarioatual, temposervico;

    printf("Indique o seu nome:");
    gets(nome);

    printf("%s indique o valor do seu sal�rio atual:", nome);
    scanf("%f",&salarioatual);

    printf("%s indique o seu tempo de servi�o na empresa (anos):", nome);
    scanf("%f",&temposervico);

    if(salarioatual<=500 && temposervico<1){
    printf("O funcionario %s tem direito a ter um reajuste de 25%% do salario que ficara em %.2f Euros sem direito a bonus", nome, salarioatual+(salarioatual*0.25));
    }
    else if(salarioatual<=1000 &&temposervico>=1 && temposervico<=3){
        printf("O funcionario %s tem direito a ter um reajuste de 20%% do salario que ficara em %.2f Euros\n e devido ao tempo de servi�o tem direito a bonus de valor de 100 Euros ficando um total de %.2f Euros", nome, salarioatual+(salarioatual*0.2), salarioatual+(salarioatual*0.2)+100);
    }
    else if (salarioatual<=1500 &&temposervico>=4 && temposervico<=6){
        printf("O funcionario %s tem direito a ter um reajuste de 15%% do salario que ficara em %.2f Euros\n e devido ao tempo de servi�o tem direito a bonus de valor de 200 Euros ficando um total de %.2f Euros", nome, salarioatual+(salarioatual*0.15), salarioatual+(salarioatual*0.15)+200);
    }
    else if (salarioatual<=2000 &&temposervico>=7 && temposervico<=10){
        printf("O funcionario %s tem direito a ter um reajuste de 15%% do salario que ficara em %.2f Euros\n e devido ao tempo de servi�o tem direito a bonus de valor de 200 Euros ficando um total de %.2f Euros", nome, salarioatual+(salarioatual*0.1), salarioatual+(salarioatual*0.1)+300);
    }
    else {
        printf("O funcionario %s n�o tem direito a ter um reajuste do salario.\n E devido ao tempo de servi�o tem direito a bonus de valor de 500 Euros ficando um total de %.2f Euros", nome, salarioatual+500);
    }




/*
Sal�rio Atual	 Reajuste		Tempo de Servi�o	 B�nus
At� 500,00	    25% 		    Abaixo de 1 ano 	Sem B�nus
At� 1000,00	    20%		        De 1 a 3 anos 	    100,00
At� 1500,00 	15% 		    De 4 a 6 anos 	    200,00
At� 2000,00 	10% 		    De 7 a 10 anos 	    300,00
Acima de 2000   Sem reajuste 	Mais de 10 anos 	500,00
*/











}

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <time.h>

/*
Fa�a um programa que mostre no ecr� os n�meros naturais entre 0 (zero) e 100. Crie
tr�s vers�es desse programa, cada uma usando uma estrutura de repeti��o
diferente.
*/

void main (){
    setlocale(LC_ALL,"Portuguese");
    int n = 0;

    printf("\t\t\t\t\t\tgerador de n�meros naturais!\n\n");
	while(n<=100){
       printf("\t\t\t|\t%i\t| \t", n);
       n++;
    }




}

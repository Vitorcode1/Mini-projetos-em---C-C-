#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

/*
Exerc�cio 1
Fa�a um programa que mostre no ecr� os n�meros naturais entre 0 (zero) e 100. Crie
tr�s vers�es desse programa, cada uma usando uma estrutura de repeti��o
diferente.
*/


  main(){
    setlocale(LC_ALL,"Portuguese");

    printf("\t\t\t\t\t\tgerador de n�meros naturais!\n\n");
	for(int n=0; n<=100;n++)
        {
       printf("\t\t\t|\t%i\t| \t", n);
    }
}

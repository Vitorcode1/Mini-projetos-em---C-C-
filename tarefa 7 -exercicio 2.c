#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

/*
Exerc�cio 2
Fa�a um programa que solicite ao utilizador um valor positivo. O programa dever�
repetir a solicita��o caso o utilizador forne�a um valor inv�lido (negativo). Quando
o utilizador fornecer um valor v�lido, mostre uma mensagem de texto confirmando
o valor digitado.
*/

void main (){
    setlocale(LC_ALL,"Portuguese");
    int n=0;

    do{
       printf("Insira um valor positivo:  ");
       scanf("%i",&n);
    }
	while(n<0);
    printf("-------valor valido digitado: %i -------- \n", n);



}

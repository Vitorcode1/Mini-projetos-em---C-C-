#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

/*
Exerc�cio 1
Crie um algoritmo que mostre se um dado ano � bissexto ou comum.
Nota:
Um ano � bissexto quando � divis�vel por 4 e por 100 ou divis�vel por 400.
*/

void main (){
    setlocale(LC_ALL,"Portuguese");
    int bi;
    printf("indique o ano:");
    scanf("%i", &bi);

    if(bi%4==0 && bi%100==0 || bi%400==0){
        printf("O ano %i � bissexto", bi);
    }
    else {
        printf("o ano %i nao � um ano bissexto", bi);
    }




}

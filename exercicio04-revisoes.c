#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

/*
Crie um programa para calcular a �rea de um tri�ngulo ret�ngulo. O tamanho da
base e altura do tri�ngulo devem ser informados pelo utilizador.
A=(base*altura)/2
*/


void main (){

    setlocale(LC_ALL,"Portuguese");
    float base, altura, area;

    printf("indique a base do tri�ngulo ret�ngulo:");
    scanf("%f",&base);

    printf("indique a altura do tri�ngulo ret�ngulo:");
    scanf("%f",&altura);

    area=(base*altura)/2;

    printf("a �rea do tri�ngulo ret�ngulo e de: %.2f",area);


}

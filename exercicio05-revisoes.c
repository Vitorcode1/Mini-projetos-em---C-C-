#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

/*
Crie um programa que converta euros em d�lares � taxa de c�mbio do dia de 28-04-
2022
*/

void main (){

    setlocale(LC_ALL,"Portuguese");
    float dol, euro, c;

    printf("indique a quantia em euros para converter em d�lar:");
    scanf("%f",&euro);

    c=(euro*1.055);

    printf("a quantia inserida em euros convertida em d�lar sera de: %.3f d�lares",c);



}

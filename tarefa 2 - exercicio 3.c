#include <stdio.h>
#include <stdlib.h>
#include <locale.h>


/*
Criar um programa para receber 3 valores inteiros correspondendo ao lados de tri�ngulo e informar
se o tri�ngulo � equil�tero, is�sceles ou escaleno.
Equil�tero Lados todos iguais
Is�sceles Dois iguais
Escaleno Todos diferentes
*/

void main (){
    setlocale(LC_ALL,"Portuguese");
    int sideA, sideB, sideC;

    printf("Indique o tamanho do lado A do triangulo:");
    scanf("%i", &sideA);
    printf("Indique o tamanho do lado B do triangulo:");
    scanf("%i", &sideB);
    printf("Indique o tamanho do lado C do triangulo:");
    scanf("%i", &sideC);

    if (sideA==sideB && sideA==sideC){
        printf("As medidas inseridas correspondem a de um triangulo equilatero!");
    }
    else if (sideA==sideB || sideA==sideC || sideB==sideC){
        printf("As medidas inseridas correspondem a de um triangulo Is�sceles!");
    }
    else{
        printf("As medidas inseridas correspondem a de um triangulo Escaleno!");
    }



}

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
/*
Exerc�cio 3
Programa para calcular a �rea de um c�rculo (A = pi . r2
2). Desta vez, se o utilizador introduzir um valor
negativo para o raio, o programa volta a pedir um valor para o raio e s� depois calcula a �rea.
*/

void main(){
    setlocale(LC_ALL,"Portuguese");
    float pie=3.14, raio=-1;

    while (raio<0){
        printf("indique um valor positivo para o raio do circulo:");
        scanf("%f",&raio);
        }
    printf("a area do circulo � %.2f", (pie*(raio*raio)));

}

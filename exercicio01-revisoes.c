#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

/*
Ler o valor do raio de um c�rculo e calcular a �rea desse c�rculo.
A=PI x raio^2
 */




void main () {
    setlocale(LC_ALL,"Portuguese");
    float raio, a;

    printf("Indique o valor do raio para calcular a area do circulo:");
    scanf("%f", &raio);


    a=(3.14*(raio*raio));

    printf ("A area do circulo e de %.2f",a);


}

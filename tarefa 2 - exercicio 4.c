#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

/*
Exerc�cio 4
Elaborar um programa que recebe 3 valores inteiros. Mostra o maior, o menor e a m�dia.
*/

void main (){
    setlocale(LC_ALL,"Portuguese");
    int n1, n2, n3;
    float media;

    printf("Indique o valor do primeiro numero:");
    scanf("%i",&n1);

    printf("Indique o valor do segundo numero:");
    scanf("%i",&n2);

    printf("Indique o valor do segundo numero:");
    scanf("%i",&n3);

    media=((n1+n2+n3)/3);

    if(n1>n2 && n1>n3){
        printf("O maior numero � %i que foi o primeiro valor que voc� digitou\n", n1);
        printf("a media dos valores � de: %.1f",media);
    }
    else if(n2>n1 && n2>n3){
        printf("O maior numero � %i que foi o segundo valor que voc� digitou \n", n2);
        printf("a media dos valores � de: %.1f \n",media);
    }
    else {
        printf("O maior numero � %i que foi o terceiro valor que voc� digitou \n", n3);
        printf("a media dos valores � de: %.1f \n",media);
    }

    if (n1<n2 && n1<n3){
        printf("O menor numero � %i que foi o primeiro digito que voc� digitou \n",n1);
    }
    else if (n2<n1 && n2<n3){
        printf("O menor numero � %i que foi o segundo digito que voc� digitou",n2);
    }
    else {
        printf("O menor numero � %i que foi o terceiro digito que voc� digitou",n3);
    }





}

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

/*
A import�ncia de 10.000 � ser� dividida entre tr�s vencedores de um concurso.
Sendo que da quantia total:
- O primeiro vencedor receber� 46%;
- O segundo receber� 32%;
- O terceiro receber� o restante.
Calcule e imprima a quantia ganha por cada um dos vencedores.
*/

void main () {
    setlocale(LC_ALL,"Portuguese");
    float venc1, venc2, venc3;

    printf("Premio de 10000 euros - Concurso\n");

    venc1=10000*0.46;
    venc2=10000*0.32;
    venc3=10000*0.22;

    printf("O primeiro vencedor receber� o pr�mio de: %.2f euros\n", venc1);
    printf("O segundo vencedor receber� o pr�mio de: %.2f euros\n", venc2);
    printf("O terceiro vencedor receber� o pr�mio de: %.2f euros\n", venc3);



}

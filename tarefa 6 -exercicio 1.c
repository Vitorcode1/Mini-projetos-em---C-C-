#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

/*
Exerc�cio 1
Crie um programa que v� solicitando ao utilizador n�meros inteiros. O programa termina quando o
n�mero inserido for o n�mero �zero�. Como sa�da deve apresentar a soma dos n�meros inseridos e
quantos n�meros foram inseridos.
*/

void main(){
    setlocale(LC_ALL,"Portuguese");
    int numero=9999, contador=0, soma=0;
    while (numero!=0){
        printf("digite um numero\t");
        scanf("%i",&numero);
        soma+=numero;
        contador++;

    }
    printf("a quantidade de numeros inseridos foi: %i\n soma dos numeros inseridos foram %i", contador-1, soma);

}

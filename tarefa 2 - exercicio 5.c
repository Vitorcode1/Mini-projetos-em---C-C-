#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

/*
Exerc�cio 5
Escreva um programa para determinar o tipo de bilhete que cada visitante de um parque de divers�es deve
comprar. O tipo de bilhete � determinado em fun��o da idade, de acordo com a seguinte tabela:
Idade Bilhete
<6 Isento de Pagamento
Entre 6 e 12 Bilhete de Crian�a
Entre 13 e 65 Bilhete Normal
>65 Bilhete de 3� Idade
*/

void main(){
    setlocale(LC_ALL,"Portuguese");
    int idade;

    printf("indique a sua idade:");
    scanf("%i",&idade);

    if (idade<6){
        printf("o visitante com a idade %i � isento de pagamento",idade);
    }
    else if (idade>=6 && idade<=12){
        printf("o visitante com idade %i se enquadra como bilhete de crian�a", idade);
    }
    else if (idade>=13 && idade<=65){
        printf("o visitante com idade %i se enquadra como bilhete normal", idade);
    }
    else {
        printf("o visitante com idade %i se enquadra como bilhete 3� idade", idade);
    }




}



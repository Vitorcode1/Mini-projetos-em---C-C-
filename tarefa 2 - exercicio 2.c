#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

/*
Exerc�cio 2
Pretende-se calcular a idade em anos em fun��o do dia, m�s e ano de nascimento e dia, m�s e ano
atual.
Considere o seguinte:
- Em condi��es normais a idade � a diferen�a entre o ano atual e ano de nascimento. No entanto se o
m�s atual for inferior ao m�s de nascimento ou o m�s atual igual ao m�s de nascimento e o dia atual
inferior ao dia de nascimento a idade � o ano atual menos o ano de nascimento menos um.
*/

void main(){
    setlocale(LC_ALL,"Portuguese");
    int anoatual, anonasc, mesatual, diatual, mesnasc, dianasc;
    printf("indique o dia atual:");
    scanf("%i",&diatual);

    printf("indique o m�s atual:");
    scanf("%i",&mesatual);

    printf("indique o ano atual:");
    scanf("%i",&anoatual);

    printf("indique o ano do seu nascimento:");
    scanf("%i",&anonasc);

    printf("indique o m�s do seu nascimento:");
    scanf("%i",&mesnasc);

    printf("indique o dia do seu nascimento:");
    scanf("%i",&dianasc);


    if (mesatual<mesnasc || mesatual==anonasc && diatual<dianasc){
        printf("Sua idade atual � %i", (anoatual-anonasc-1));
    }
    else{
        printf("sua idade atual � %i",(anoatual-anonasc));

    }

    /*
    ano atual - nascimento
    mes atual<mes nascimento || mes atual==nascimento && dia atual<dia nascimento
    idade = ano atual-ano nascimento -1 */






}

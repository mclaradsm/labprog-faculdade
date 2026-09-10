#include <stdio.h>
#include <stdlib.h>

int main(){
    char semana;
    puts("Digite um número de 1 a 7 para saber o dia da semana: \n");
    puts("Use 0 para encerrar!\n");
    scanf("%c", &semana);

    if (semana == '0'){
        printf("Programa encerrado! \n");
        exit(0);
    }

    switch(semana){

        case '1':
            printf("O dia %c da semana é Domingo! \n", semana);
            break;
        case '2':
            printf("O dia %c da semana é Segunda! \n", semana);
            break;
        case '3':
            printf("O dia %c da semana é Terça! \n", semana);
            break;
        case '4':
            printf("O dia %c da semana é Quarta! \n", semana);
            break;
        case '5':
            printf("O dia %c da semana é Quinta! \n", semana);
            break;
        case '6':
            printf("O dia %c da semana é Sexta! \n", semana);
            break;
        case '7':
            printf("O dia %c da semana é Sábado! \n", semana);
            break;

        default:
            printf("Número inválido! \n");
    }
    
    return 0;
}
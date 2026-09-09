#include <stdio.h>
#include <stdlib.h>

int main(){
    int numero;
    puts("Digite um número para verificar o dia da semana: \n");
    puts("Digite 0 para encerrar o programa.");
    scanf("%d", &numero);

    while (numero !=0){
        switch (numero){
            case 1:
                puts("O dia da semana é Domingo.");
                break;
            case 2:
                puts("O dia da semana é Segunda-feira.");
                break;
            case 3:
                puts("O dia da semana é Terça-feira.");
                break;
            case 4:
                puts("O dia da semana é Quarta-feira.");
                break;
            case 5:
                puts("O dia da semana é Quinta-feira.");
                break;
            case 6:
                puts("O dia da semana é Sexta-feira.");
                break;
            case 7:
                puts("O dia da semana é Sábado.");
                break;
            default:
                puts("Número inválido. Digite um número entre 1 e 7 para verificar o dia da semana ou digite 0 para encerrar o programa.");
            }
            scanf("%d", &numero);
    }


return 0;
}
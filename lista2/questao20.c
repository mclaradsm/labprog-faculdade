//Construir um programa que apresente como resultado o fatorial dos valores  ́ımpares situados na faixa numero de 1 a 10.
#include <stdio.h>

int main(){
    int i, j, fatorial;
    for(i=1; i<=10; i+=2){
        fatorial = 1;
        for(j=1; j<=i; j++){
            fatorial *= j;
        }
        printf("O fatorial de %d é: %d\n", i, fatorial);
    }

return 0;
}
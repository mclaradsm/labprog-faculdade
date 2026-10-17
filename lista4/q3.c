#include <stdio.h>
#include <string.h>
#define TAM 30

int main(){
    char str[TAM];
    int contador;

    puts("Escreva algo para a informacão do tamanho: ");
    fgets(str, TAM, stdin);

    contador = 0;
    while(str[contador] != '\0'){
        contador++;
    }

    printf("O tamanho da string é: %d\n", contador-1);

    return 0;
}
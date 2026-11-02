#include <stdio.h>
#include <string.h>
#define TAM 30

int main(){
    char string[TAM];
    char *pa;
    int count=0;

    pa= string;

    puts("Digite uma palavra: \n");
    fgets(string, TAM, stdin);

    while(*pa != '\0' && *pa != '\n'){
        count++;
        pa++;
    }



    printf("O tamanho da string é: %d\n", count);

    return 0;
}
#include <stdio.h>
#include <string.h>
#define TAM 30

int main(){
    char palavra[TAM], palavra2[TAM];
    char *pa, *pb;

    puts("\nEscreva a primeira palavra: ");
    fgets(palavra, TAM, stdin);

    pa= palavra;

    puts("\nEscreva a segunda palavra: ");
    fgets(palavra2, TAM, stdin);

    pb= palavra2;

    palavra[strcspn(palavra, "\n")] = '\0';
    palavra2[strcspn(palavra2, "\n")] = '\0';

    while(*pa != '\0' && pa != '\n'){
        pa++;
    }

    while (*pb != '\0' && *pb != '\n'){
        *pa = *pb;
        pa++;
        pb++;
    }

    *pa = '\0';

    printf("\nA palavra após a concatenação é: %s", palavra);

    return 0;
} 
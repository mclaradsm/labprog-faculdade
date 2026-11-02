#include <stdio.h>
#include <string.h>
#define TAM 30

int main(){
    char string[TAM];

    puts("\nDigite uma palavra: ");
    fgets(string, TAM, stdin);

    char *p1= string;

    char **p2= &p1;

    printf("\nA palavra digitada foi: %s\n", *p2);

    return 0;
}
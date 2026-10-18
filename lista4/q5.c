#include <stdio.h>
#include <string.h>
#define TAM 30

int main(){
    char str[TAM];
    char str2[TAM];

    puts("Escreva a primeira string: ");
    scanf("%[^\n]", str);
    fflush(stdin);

    puts("Escreva a segunda string: ");
    scanf("%[^\n]", str2);
    fflush(stdin);

    str[strcspn(str, "\n")] = '\0';
    str2[strcspn(str2, "\n")] = '\0';

    puts("Versão com strcat():");
    strcat(str, str2);
    printf("A string concatenada é: %s\n", str);


    puts("Versão sem strcat():");

    int i = 0, j = 0;
    while(str[i] != '\0'){
        i++;
    }

    while(str2[j] != '\0'){
        str[i] = str2[j];
        i++;
        j++;
    }

    str[i] = '\0';
    printf("A string concatenada é: %s\n", str);

    return 0;
}
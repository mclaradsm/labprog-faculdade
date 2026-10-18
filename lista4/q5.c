#include <stdio.h>
#include <string.h>
#define TAM 30

int main(){
    char str[TAM];
    char str2[TAM];
    char str3[TAM];

    puts("Escreva a primeira string: ");
    scanf("%[^\n]", str);
    fflush(stdin);
    strcpy(str3, str);

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
    while(str3[i] != '\0'){
        i++;
    }

    while(str2[j] != '\0'){
        str3[i] = str2[j];
        i++;
        j++;
    }

    str3[i] = '\0';
    printf("A string concatenada é: %s\n", str3);

    return 0;
}
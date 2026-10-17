#include <stdio.h>
#include <string.h>
#define TAM 30

int main(){
    char str[TAM];
    char str2[TAM];

    puts("Escreva a primeira string: ");
    fgets(str, TAM, stdin);

    puts("Escreva a segunda string: ");
    fgets(str2, TAM, stdin);

    puts("Versão com strcmp():");
    if(strcmp(str, str2) == 0){
        printf("As strings são iguais.\n");
    } else {
        printf("As strings são diferentes.\n");
    }

    puts("Versão sem strcmp():");
    int iguais = 1;
    for(int i = 0; str[i] != '\0' && str2[i] != '\0'; i++){
        if(str[i] != str2[i]){
            iguais = 0;
            break;
        }
    }
    if(iguais){
        printf("As strings são iguais.\n");
    } else {
        printf("As strings são diferentes.\n");
    }

    return 0;
}
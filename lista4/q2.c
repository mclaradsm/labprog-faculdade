#include <stdio.h>
#include <string.h>
#define TAM 30

int main(){
    char string[TAM];
    char c;

    printf("Digite uma string: ");
    fgets(string, TAM, stdin);

    printf("Digite um caractere: ");
    scanf(" %c", &c);

    int encontrado = 0;
    for(int i = 0; i < strlen(string) && string[i] != '\0'; i++){
        if(string[i] == c){
            encontrado = 1;
            break;
        }
    }

    if(encontrado){
        printf("O caractere '%c' foi encontrado na string.\n", c);
    } else {
        printf("O caractere '%c' não foi encontrado na string.\n", c);
    }

    return 0;
}
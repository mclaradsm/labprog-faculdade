#include <stdio.h>
#include <string.h>
#define TAM 50

int main(){
    char str[TAM], str2[TAM];

    puts("Informe uma string:");
    fgets(str, TAM, stdin);

    str[strcspn(str, "\n")] = '\0';
    for(int i = strlen(str) - 1; i >= 0; i--){
        printf("%c", str[i]);
    }





    return 0;
}
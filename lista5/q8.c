#include <stdio.h>
#define TAM 30

int main(){
    char palavra[TAM];
    char letra;
    char *pa;
    int count=0, armazenar;

    pa= palavra;

    puts("Digite a palavra: ");
    fgets(palavra, TAM, stdin);

    puts("Digite o caractere que você quer saber se tem na palavra: ");
    scanf("%c", &letra);

    for(int j=0; j<TAM; j++){
        if(palavra[j]!='\0'){
            count++; 
        }
        if(palavra[j]=='\0'){
            break;
        }
    }

    printf("quantidade da palavra = %d\n", count-1);

    for(int i=0; i<count; i++){
        if (*(pa+i)==letra){
            armazenar =1;
        }
    }

    if (armazenar){
        printf("O caractere [%c] está em %s", letra, palavra);
    }else{
        printf("O caractere [%c] NÃO está em %s", letra, palavra);       
    }


    return 0;
}
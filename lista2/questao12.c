#include <stdio.h>

int main(){
    int tabuada, i, numero;

    printf("Digite o número para a tabuada: ");
    scanf("%d", &numero);

    for (i=1; i<=10; i++){
        printf("%d x %d = %d\n", numero, i, numero*i);
    }

    return 0;
}
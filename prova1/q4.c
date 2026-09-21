#include <stdio.h>

int main(){
    int numero;
    int contador=0, soma=0;

    puts ("Digite um número: ");
    scanf("%d", &numero);

    do{
        if(numero >= 0 && numero <= 255){
            soma += numero;
            contador++;
        }
        scanf("%d", &numero);
    }while (numero != -1);

    printf("Soma= %d\n", soma);
    printf("Contador= %d\n", contador);

return 0;
}
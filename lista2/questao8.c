#include <stdio.h>

int main(){
    int entrada, parcelas, valor, resto;
    puts("Digite o valor da mercadoria:");
    scanf("%d", &valor);
    
    if (valor % 3 == 0){
        printf("O valor da entrada é %d e o valor das parcelas é %d\n", valor/3, valor/3);
    }else{
        resto = valor %3;
        printf("O valor da entrada é %d e o valor das parcelas é %d\n", valor/3 + resto, valor/3);
    } 


    return 0;
}
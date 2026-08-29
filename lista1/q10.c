#include <stdio.h>

int main(){
    float real, cotacao, conv;

    puts("Digite a cotação do dólar: ");
    scanf("%f", &cotacao);

    puts("Digite a quantidade de reais para converter: ");
    scanf("%f", &real);

    conv = real / cotacao;
    printf("O valor em dólares é: %.2f dólares\n", conv);
    return 0;
}

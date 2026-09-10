//Um palındromo  ́e um numero, ou frase textual, que pode ser lido da mesma forma da esquerda para
//a direita e vice-versa. Por exemplo, cada um dos seguintes inteiros de cinco dıgitos  ́e um palındromo:
//12321, 55555, 45554 e 11611. Escreva um programa que leia um inteiro de cinco dıgitos e determine se
//ele  ́e ou nao um palındromo. [Dica: use os operadores de divisao e modulo para separar o numero em
//seus dıgitos individuais.]


#include <stdio.h>

int main(){
    int numero, d1, d2, d3, d4, d5;
    puts("Digite um número de cinco dígitos: ");
    scanf("%d", &numero);
    d1 = numero / 10000;
    d2 = (numero / 1000) % 10;
    d3 = (numero / 100) % 10;
    d4 = (numero / 10) % 10;
    d5 = numero % 10;

    if (d1 == d5 && d2 == d4) {
        puts("O número é um palíndromo.");
    } else {
        puts("O número não é um palíndromo.");
    }

    return 0;
}
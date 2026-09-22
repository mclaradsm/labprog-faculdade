#include <stdio.h>

int main() {
    int R, G, B;
    int M;

    // Leitura dos valores de entrada
    printf("Digite os valores de R, G e B (0 a 255): ");
    scanf("%d %d %d", &R, &G, &B);

    printf("Digite a mensagem M (0 a 7): ");
    scanf("%d", &M);

    // Extração dos bits de M
    int bit2 = (M >> 2) & 1; // Bit mais significativo da mensagem de 3 bits
    int bit1 = (M >> 1) & 1; // Bit do meio
    int bit0 = (M >> 0) & 1; // Bit menos significativo

    // Substituição do bit 0 de R, G e B pelos bits correspondentes de M
    // (R & ~1) zera o bit 0 de R, mantendo os outros 7 bits intactos.
    // Em seguida, somamos/aplicamos OU com o bit desejado.
    R = (R & ~1) | bit2;
    G = (G & ~1) | bit1;
    B = (B & ~1) | bit0;

    // Exibição dos novos valores
    printf("\nValores apos a esteganografia:\n");
    printf("R: %d\n", R);
    printf("G: %d\n", G);
    printf("B: %d\n", B);

    return 0;
}
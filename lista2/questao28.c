#include <stdio.h>

int main() {

    unsigned char x, y;
    int i;
    int bit;

    printf("Digite X: ");
    scanf("%hhu", &x);

    printf("Digite Y: ");
    scanf("%hhu", &y);

    if (y < 5 || y > 251) {
        printf("Y deve estar entre 5 e 251.\n");
        return 0;
    }

    printf("\nBits de x colocados nas posições:\n");

    for (i = 7; i >= 0; i--) {
        bit = (x >> i) & 1;

        if (i >= 4) {
            printf("Posição %d recebe o bit %d\n",
                   y - (i - 3), bit);
        } else {
            printf("Posição %d recebe o bit %d\n",
                   y + (4 - i), bit);
        }
    }

    return 0;
}
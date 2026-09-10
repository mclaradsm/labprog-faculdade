#include <stdio.h>

int main() {

    int i, j;
    int n;

    printf("Decimal\tOctal\tHexadecimal\tBinario\n");

    for (i = 1; i <= 256; i++) {

        printf("%d\t %o\t %x\t\t", i, i, i);
        n = i;

        for (j = 7; j >= 0; j--) {
            printf("%d", (n >> j) & 1);
        }

        printf("\n");
    }

    return 0;
}
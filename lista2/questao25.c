#include <stdio.h>

int main() {

    int i;
    double pi = 0.0;

    printf("Termos\tValor aproximado de PI\n");

    for (i = 1; i <= 10; i++) {
        if (i % 2 == 1) {
            pi = pi + 4.0 / (2 * i - 1);
        } else {
            pi = pi - 4.0 / (2 * i - 1);
        }

        printf("%d\t %.10f\n", i, pi);
    }

    return 0;
}
#include <stdio.h>

int main() {

    float f;
    int i;

    for (i = 10; i <= 100; i += 10) {
        f = (i * 1.8) + 32;
        printf("%d graus Celsius = %.1f graus Fahrenheit\n", i, f);
    }

    return 0;
}
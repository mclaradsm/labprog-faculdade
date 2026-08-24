#include <stdio.h>
int main(){
    int x;
    puts ("Digite um número: ");
    scanf ("%d", &x);

    printf("1 casa decimal: %.1f\n", (float)x);

    return 0;
}
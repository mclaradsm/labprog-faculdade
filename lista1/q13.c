#include <stdio.h>

int main(){
    float c, f;
    puts("Digite a temperatura em Celsius: ");
    scanf("%f", &c);

    f = (9*c + 160) / 5;
    printf("A temperatura em Fahrenheit é: %.2f\n", f);

return 0;
}
#include <stdio.h>

int main(){
    float raio;
    const float pi = 3.14159;
    puts ("Digite o valor do raio: ");
    scanf ("%f", &raio);
    printf("O valor do diamêtro é: %.2f\n", 2*raio);
    printf("O valor da circunferência é: %.2f\n", 2*pi*raio);
    printf("O valor da área é: %.2f\n", pi*raio*raio);

    return 0;
}
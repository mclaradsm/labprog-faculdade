#include <stdio.h>

int main (){
    float horas, minutos, segundos, totalSegundos;
    puts("Digite a quantidade de horas: ");
    scanf("%f", &horas);

    puts("Digite a quantidade de minutos: ");
    scanf("%f", &minutos);

    puts("Digite a quantidade de segundos: ");
    scanf("%f", &segundos);
    totalSegundos = (horas * 3600) + (minutos * 60) + segundos;

    printf("O total de segundos é: %.2f\n", totalSegundos);

    return 0;
}
#include <stdio.h>

int main(){
    int seg, min, hora;
    puts("Digite a quantidade de segundos: ");
    scanf("%d", &seg);

    hora = seg / 3600;
    min = (seg % 3600) / 60;
    seg = (seg % 3600) % 60;
    printf("O tempo convertido é: %d horas, %d minutos e %d segundos\n", hora, min, seg);

    return 0;
}
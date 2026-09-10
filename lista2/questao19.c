#include <stdio.h>

int main(){
    int i, media,x,y;
    puts("Digite o intervalo que deseja calcular a média: ");
    scanf("%d %d", &x, &y);
    media = 0;
    for(i=x; i<=y; i++){
        media += i;
    }
    media = media/(y-x+1);
    printf("A média do intervalo de %d a %d é: %d\n", x, y, media);


    return 0;
}
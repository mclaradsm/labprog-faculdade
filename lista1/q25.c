#include <stdio.h>
#include <math.h>

int main(){
    float x,y,x2,y2, dist;
    puts("Digite as coordenadas do ponto A (x,y):");
    scanf("%f %f", &x, &y);
    puts("Digite as coordenadas do ponto B (x,y):");
    scanf("%f %f", &x2, &y2);

    dist= sqrt(pow(x2-x,2)+pow(y2-y,2));
    printf("A distancia entre os pontos A e B e: %.2f\n", dist);

return 0;
}
#include <stdio.h>

int main(){
    int n, i;
    float x1, x2, x3, media;

    puts("Digite a quantidade de amostras: ");
    scanf("%d", &n);

    puts("Digite a amostra 1: ");
    scanf("%f", &x1);

    puts("Digite a amopstra 2: ");
    scanf("%f", &x2);

    for(i=3; i<=n; i++){
        printf("Digite a amostra %d: ", i);
        scanf("%f", &x3);

        media=(x1+x2+x3)/3;

        printf("%d = %.2f\n", i-1, media);

        x1=x2;
        x2=x3;

    }

return 0;
}
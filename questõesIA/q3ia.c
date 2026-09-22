#include <stdio.h>

int main() {
    int n;

    printf("Digite o numero de pixels da imagem (n): ");
    scanf("%d", &n);

    if (n <= 0) {
        printf("O numero de pixels deve ser maior que zero.\n");
        return 1;
    }

    int x_min = 255; // Inicializa com o maior valor possivel do intervalo [0, 255]
    int x_max = 0;   // Inicializa com o menor valor possivel do intervalo [0, 255]
    int pixel_atual;

    // Leitura da sequencia de n pixels para determinar x_min e x_max
    for (int i = 1; i <= n; i++) {
        printf("Digite a intensidade do pixel %d (0 a 255): ", i);
        scanf("%d", &pixel_atual);

        if (pixel_atual < x_min) {
            x_min = pixel_atual;
        }
        if (pixel_atual > x_max) {
            x_max = pixel_atual;
        }
    }

    printf("\n--- Resultados Encontrados ---\n");
    printf("Menor intensidade (x_min): %d\n", x_min);
    printf("Maior intensidade (x_max): %d\n\n", x_max);

    // Leitura do pixel x que sera normalizado
    int x;
    printf("Digite a intensidade do pixel x a ser normalizado: ");
    scanf("%d", &x);

    // Verificacao para evitar divisao por zero caso todos os pixels sejam iguais
    if (x_max == x_min) {
        printf("Aviso: x_max e x_min sao iguais. O valor normalizado x' eh 0.00\n");
    } else {
        // Formula do Min-Max Scaling: x' = (x - x_min) / (x_max - x_min)
        // Usamos (double) para forcar a divisao em ponto flutuante
        double x_linha = (double)(x - x_min) / (x_max - x_min);

        printf("O valor normalizado (x') eh: %.4lf\n", x_linha);
    }

    return 0;
}
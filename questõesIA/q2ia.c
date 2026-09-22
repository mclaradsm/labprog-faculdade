#include <stdio.h>

int main() {
    int n;

    printf("Digite o numero de amostras (n >= 3): ");
    scanf("%d", &n);

    if (n < 3) {
        printf("Eh necessario ter pelo menos 3 amostras para calcular a media movel.\n");
        return 1;
    }

    double ant, atual, prox;

    // Leitura das duas primeiras amostras (x1 e x2)
    printf("Digite a amostra x1: ");
    scanf("%lf", &ant);

    printf("Digite a amostra x2: ");
    scanf("%lf", &atual);

    printf("\n--- Resultados do Sinal Suavizado (y) ---\n");

    // Processa a partir da terceira amostra ate a n-esima
    for (int i = 3; i <= n; i++) {
        printf("Digite a amostra x%d: ", i);
        scanf("%lf", &prox);

        // Formula da media movel centrada: (x_{i-1} + x_i + x_{i+1}) / 3
        double y = (ant + atual + prox) / 3.0;

        printf("y%d = %.2lf\n\n", i - 1, y);

        // Desloca a janela para a proxima iteracao:
        // O valor 'atual' vira o 'anterior', e o 'proximo' vira o 'atual'
        ant = atual;
        atual = prox;
    }

    return 0;
}
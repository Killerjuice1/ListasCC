#include <stdio.h>

int main() {
    int casos;
    scanf("%d", &casos);

    int i; // Mover a declaração da variável i para antes do loop for

    for (i = 1; i <= casos; i++) {
        int publico;
        double popular, geral, arquibancada, cadeiras;
        scanf("%d %lf %lf %lf %lf", &publico, &popular, &geral, &arquibancada, &cadeiras);

        double renda_total = (popular * 0.01 * publico * 1.00) + (geral * 0.01 * publico * 5.00) +
                             (arquibancada * 0.01 * publico * 10.00) + (cadeiras * 0.01 * publico * 20.00);

        printf("A RENDA DO JOGO N. %d E = %.2lf\n", i, renda_total);
    }

    return 0;
}

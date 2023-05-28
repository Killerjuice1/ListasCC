#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);

    int sequencia[n];
    int i;

    for (i = 0; i < n; i++) {
        scanf("%d", &sequencia[i]);
    }

    int maxComprimento = 0;
    int comprimentoAtual = 0;

    for (i = 1; i < n; i++) {
        if (sequencia[i] > sequencia[i - 1]) {
            comprimentoAtual++;
        } else {
            if (comprimentoAtual > maxComprimento) {
                maxComprimento = comprimentoAtual;
            }
            comprimentoAtual = 0;
        }
    }

    if (comprimentoAtual > maxComprimento) {
        maxComprimento = comprimentoAtual;
    }

    printf("O comprimento do segmento crescente maximo e: %d\n", maxComprimento);

    return 0;
}

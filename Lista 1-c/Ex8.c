#include <stdio.h>

int main() {
    int populacaoA, populacaoB;
    int anos = 0;

    scanf("%d", &populacaoA);
    scanf("%d", &populacaoB);

    while (populacaoA <= populacaoB) {
        populacaoA += populacaoA * 0.03; // Taxa de crescimento de 3%
        populacaoB += populacaoB * 0.015; // Taxa de crescimento de 1.5%
        anos++;
    }

    printf("ANOS = %d\n", anos);

    return 0;
}

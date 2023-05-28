#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);

    if (n <= 1) {
        printf("Numero invalido!\n");
    } else {
        double soma = 0.0;
        int k;
        for (k = 1; k <= n; k++) {
            soma += 1.0 / k;
        }

        printf("%.6lf\n", soma);
    }

    return 0;
}

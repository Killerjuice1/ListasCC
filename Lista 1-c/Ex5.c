#include <stdio.h>

int main() {
    int a1, r, n;
    scanf("%d %d %d", &a1, &r, &n);

    int soma = 0;
    int i;
    for (i = 0; i < n; i++) {
        soma += a1 + (i * r);
    }

    printf("%d\n", soma);

    return 0;
}

#include <stdio.h>

void imprimirParesIndices(int m, int n) {
    int i, j;
    for (i = 2; i <= m; i++) {
        for (j = 1; j <= i-1; j++) {
            printf("(%d,%d)", i, j);
            if (j < i-1)
                printf("-");
        }
        printf("\n");
    }
}

int main() {
    int m, n;
    scanf("%d %d", &m, &n);
    
    imprimirParesIndices(m, n);
    
    return 0;
}

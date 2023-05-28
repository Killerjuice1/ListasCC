#include <stdio.h>

int main(){
    int N;
    scanf("%d", &N);

    if (N < 2) {
        printf("Campeonato invalido!\n");
        return 0;
    }

    int finalCount = 1;
    int i, j;

    for (i = 1; i <= N; i++) {
        for (j = i + 1; j <= N; j++) {
            printf("Final %d: Time%d X Time%d\n", finalCount, i, j);
            finalCount++;
        }
    }

    return 0;
}

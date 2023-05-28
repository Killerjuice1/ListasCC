#include <stdio.h>

int busca(int vetor[], int tamanho, int valor) {
    int i;
    for (i = 0; i < tamanho; i++) {
        if (vetor[i] == valor) {
            return 1;  // Valor encontrado
        }
    }
    return 0;  // Valor não encontrado
}

int main() {
    int N, M;
    scanf("%d", &N);
    
    int vetor[N];
    int i;
    for (i = 0; i < N; i++) {
        scanf("%d", &vetor[i]);
    }
    
    scanf("%d", &M);
    
    int busca_valor;
    for (i = 0; i < M; i++) {
        scanf("%d", &busca_valor);
        if (busca(vetor, N, busca_valor)) {
            printf("ACHEI\n");
        } else {
            printf("NAO ACHEI\n");
        }
    }
    
    return 0;
}

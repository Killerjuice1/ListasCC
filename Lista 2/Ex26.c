#include <stdio.h>

#define MAX_ANOES 9
#define TAM_SOMA 7

int soma[TAM_SOMA];
int toucas[MAX_ANOES];
int anoes_selecionados[TAM_SOMA];

int backtrack(int pos, int inicio, int total){
    int i;
    if (pos == TAM_SOMA) {
        if (total == 100) {
            return 1;  // Encontrou uma combinação válida
        }
        return 0;  // Combinação inválida
    }
    
    for (i = inicio; i < MAX_ANOES; i++){
        if (total + toucas[i] <= 100) {
            anoes_selecionados[pos] = toucas[i];
            if (backtrack(pos + 1, i + 1, total + toucas[i])) {
                return 1;  // Encontrou uma combinação válida
            }
        }
    }
    
    return 0;  // Nenhuma combinação encontrada
}

void solve(){
    int i;
    for (i = 0; i < MAX_ANOES; i++){
        scanf("%d", &toucas[i]);
    }
    
    if (backtrack(0, 0, 0)) {
        for (i = 0; i < TAM_SOMA; i++){
            printf("%d\n", anoes_selecionados[i]);
        }
    }
}

int main(){
    int T;
    scanf("%d", &T);
    
    int i;
    for (i = 0; i < T; i++) {
        solve();
    }
    
    return 0;
}

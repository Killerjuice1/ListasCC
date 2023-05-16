#include <stdio.h>

int main() {
    int valor, notas100, notas50, notas10, moedas1;

    // Lê o valor em reais
    printf("Digite o valor em reais: ");
    scanf("%d", &valor);

    // Inicializa as variáveis de contagem de notas e moedas
    notas100 = notas50 = notas10 = moedas1 = 0;

    // Calcula a quantidade de notas de R$ 100
    notas100 = valor / 100;
    valor %= 100;

    // Calcula a quantidade de notas de R$ 50
    notas50 = valor / 50;
    valor %= 50;

    // Calcula a quantidade de notas de R$ 10
    notas10 = valor / 10;
    valor %= 10;

    // O restante do valor será equivalente à quantidade de moedas de R$ 1
    moedas1 = valor;

    // Exibe o resultado
    printf("Quantidade de notas de R$ 100: %d\n", notas100);
    printf("Quantidade de notas de R$ 50: %d\n", notas50);
    printf("Quantidade de notas de R$ 10: %d\n", notas10);
    printf("Quantidade de moedas de R$ 1: %d\n", moedas1);

    return 0;
}


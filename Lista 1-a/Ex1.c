#include <stdio.h>

int main() {
    double salarioMinimo, consumoKW, valorKW, valorTotal, valorComDesconto;
    const double PERCENTUAL = 70.0;
    const double DESCONTO = 0.1;

    scanf("%lf", &salarioMinimo);

    scanf("%lf", &consumoKW);

    valorKW = (salarioMinimo * PERCENTUAL / 100.0) / 100.0; // Convertendo centavos para reais
    valorTotal = consumoKW * valorKW;
    valorComDesconto = valorTotal * (1 - DESCONTO);

    printf("Custo por kW: R$ %.2lf\n", valorKW);
    printf("Custo do consumo: R$ %.2lf\n", valorTotal);
    printf("Custo com desconto: R$ %.2lf\n", valorComDesconto);

    return 0;
}

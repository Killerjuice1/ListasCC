#include <stdio.h>

int inverterNumero(int num) {
    int invertido = 0;
    while (num > 0) {
        invertido = invertido * 10 + num % 10;
        num /= 10;
    }
    return invertido;
}

int compararNumeros(int a, int b) {
    int invertidoA = inverterNumero(a);
    int invertidoB = inverterNumero(b);
    
    if (invertidoA > invertidoB)
        return invertidoA;
    else
        return invertidoB;
}

int main() {
    int t;
    scanf("%d", &t);
    
    while (t > 0) {
        int a, b;
        scanf("%d %d", &a, &b);
        
        int maiorNumero = compararNumeros(a, b);
        printf("%d\n", maiorNumero);
        
        t--;
    }
    
    return 0;
}

#include <stdio.h>

int main(){
    int N;
    scanf("%d", &N);

    if (N <= 1) {
        printf("Numero invalido!\n");
        return 0;
    }

    int i;
    int isPrime = 1; // Variável para indicar se o número é primo ou não

    for (i = 2; i <= N / 2; i++) {
        if (N % i == 0) {
            isPrime = 0; // Número divisível por i, não é primo
            break;
        }
    }

    if (isPrime) {
        printf("PRIMO\n");
    } else {
        printf("NAO PRIMO\n");
    }

    return 0;
}

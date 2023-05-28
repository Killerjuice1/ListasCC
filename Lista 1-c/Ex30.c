#include <stdio.h>

int main() {
    int n;
    int divisor = 2;
    
    scanf("%d", &n);
    
    if (n <= 1) {
        printf("Fatoracao nao e possivel para o numero %d!\n", n);
        return 0;
    }
    
    printf("%d = ", n);
    
    while (n > 1) {
        if (n % divisor == 0) {
            printf("%d", divisor);
            n /= divisor;
            
            if (n > 1)
                printf(" x ");
        } else {
            divisor++;
        }
    }
    
    printf("\n");
    
    return 0;
}

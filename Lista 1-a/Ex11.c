#include <stdio.h>
 
int main() {
    int num, inverso = 0, digito;
 
   
    scanf("%d", &num);
 
    digito = num % 10;
    inverso = inverso * 10 + digito;
    num = num / 10;
 
    digito = num % 10;
    inverso = inverso * 10 + digito;
    num = num / 10;
 
    digito = num % 10;
    inverso = inverso * 10 + digito;
 
    printf("%d\n", inverso);
 
    return 0;
}
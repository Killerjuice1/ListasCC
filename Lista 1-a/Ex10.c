#include<stdio.h>
#include<math.h>
int main(){
    int numero, quarto, X, Y, Z;
    scanf("%d",&numero);
    X = numero/100;
    Y = (numero/10)%10;
    Z = numero%10;
    quarto = (X+Y*3+Z*5)%7;
    printf("O NOVO NUMERO E = %d%d", numero, quarto);


    return 0;
}
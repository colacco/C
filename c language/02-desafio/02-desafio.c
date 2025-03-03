// Faça um programa responsável por multiplicar dois números de variáveis x e y.

#include <stdio.h>

int main(){
    printf("Multiplicação entre dois números inteiros!\n");

    int x;
    int y;

    printf("Escreva o primeiro número: ");
    scanf("%d", &x);
    printf("Escreva o segundo número: ");
    scanf("%d", &y);

    int z = x * y;

    printf("A multiplicação entre %d e %d é igual a %d\n", x, y, z);
}
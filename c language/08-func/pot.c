#include <stdio.h>

void potencia(int base, int expoente) {
    int total= 1;

    for (int i = 1; i <= expoente; i++){
        total *= base;
    }
    printf("A resultado de %d elevado a %d é igual a %d\n", base, expoente, total);
}

int main() {
    int a;
    int b;

    printf("Digite um valor inteiro para ser a base: ");
    scanf("%d", &a);
    printf("Digite outro valor inteiro para ser o expoente: ");
    scanf("%d", &b);

    potencia(a, b);
}
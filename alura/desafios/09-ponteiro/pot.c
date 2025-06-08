// Escreva a mesma função de potencia da aula anterior só que agora o resultado sendo salvo em um inteiro que vem na lista de parâmetros da função.
#include <stdio.h>

potencia(int* resultado, int a, int b) {
    for(int i = 1; i<=b; i++){
        (*resultado) *= a;
    }
}

int main() {
    int resultado = 1;
    int a;
    int b;

    printf("Digite um valor inteiro para ser a base: ");
    scanf("%d", &a);
    printf("Digite outro valor inteiro para ser o expoente: ");
    scanf("%d", &b);

    potencia(&resultado, a, b);

    printf("O resultado é %d", resultado);
}
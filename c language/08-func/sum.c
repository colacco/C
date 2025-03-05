// Escreva uma função soma(int numeros[10]) qu receba um array de inteiros e imprime a soma de todos os elementos dentro desse array.
#include <stdio.h>

void soma(int numeros[10]) {
    int soma = 0;
 for (int i = 0; i <= 10; i++){
    soma += numeros[i];
 }
 printf("A soma desse array é %d\n", soma);
}

int main() {
    int numeros[10];

    soma(numeros);
} 
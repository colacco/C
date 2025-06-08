#include <stdio.h>

float imc(){
    float peso;
    float altura;

    printf("Insira seu peso: ");
    scanf("%f", &peso);
    printf("Insira sua altura: ");
    scanf("%f", &altura);

    return peso/(altura * altura);
}

int main(){
    float resultado;

    printf("Vamos calcular seu IMC!\n");
    
    resultado = imc();
    printf("Seu IMC equivale a: %f", resultado);

    return 0;
}
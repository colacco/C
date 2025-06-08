#include <stdio.h>

float celsius(float fahrenheit){
    float celsius = (fahrenheit - 32) / 1.8;
    return celsius;
}

int main(){
    float fahrenheit;
    float resultado;
    
    printf("Insira o valor em Farenheit (F):");
    scanf("%f", &fahrenheit);

    resultado = celsius(fahrenheit);
    printf("Em celsius (C) o valor seria aproximadamente: %.2f", resultado);

    return 0;
}
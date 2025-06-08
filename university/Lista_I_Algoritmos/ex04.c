#include <stdio.h>


// Requisitos: Ler uma variável em Celcius, retornar em fahrenheit

int main(){
    float celsius;
    float fahrenheit = 0;


    printf("Insira o valor da temperatura em Celsius: ");
    scanf ("%f", &celsius);

    fahrenheit = (celsius * 1.8) + 32.0;

    printf("Essa temperatura em fahrenheit equivale a %.2fF\n", fahrenheit);
}
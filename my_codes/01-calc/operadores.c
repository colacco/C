#include <stdio.h>
#include <math.h>

int calculadora(float valor1, float valor2, int opcao){ // ADICIONAR TODOAS ESSAS FUNÇÕES EM UMA.
    float resultado;

    switch (opcao){
        case 1:
            resultado = valor1 + valor2;
            break;
        case 2:
            resultado = valor1 * valor2;
            break;
        case 3:
            resultado = valor1 - valor2;
            break;
        case 4:
            div(valor1, valor2);
            break;
        case 5:
            potencia(valor1, valor2);
        case 6:
            sqrt(valor1);
        default:
            printf("Essa opção não é válida.\n");
            break;
    }

    return printf("O resultado entre %.2f e %.2f é igual a %.2f", valor1, valor2, resultado);
    
}

int div(float valor1, float valor2){
    float resultado = valor1 / valor2;
    return resultado;
}

int potencia(float valor1, float valor2){
    int total = 1;

            if (valor2 == 0){
                return total;
            } else{
                for (int i = 0; i < valor2; i++){
                    total *= valor1;
                }
                return total;
            }
}

int raiz( float valor1, float valor2){
    int divisao = div(valor1, valor2);

    
}
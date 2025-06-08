#include <stdio.h>

// Alcool <= 20: desconto de 3% (97% do valor) por litro
// Alcool > 20: desconto de 5% (95% do valor) por litro

// Gasolina <= 20: desconto de 4% (96% do valor) por litro
// Gasolina > 20: desconto de 6% (94% do valor) por litro

// Gasolina: R$5,39/litro  | Alcool: R$3,39/litro
// Requisitos: Ler o num. de litros vendidos,  tipo de combustível e imprimir o valor a ser pago

int main(){
    int opcao;
    float litros, valor, total, desconto;

    printf(" Tipos de combustíveis disponíveis: \n");
    printf("1. Gasolina\n");
    printf("2. Álcool\n\n");

    printf("Digite a opção que deseja: ");
    scanf("%i", &opcao);
    printf("Quantos litros você precisa?: ");
    scanf("%f", &litros);

    switch (opcao){
        case 1: // Gasolina
            valor = 5.39;
            if (litros <= 20){ desconto =  0.04; } 
            else { desconto = 0.06; }
            break;

        case 2: // Álcool
            valor = 3.39;
            if (litros <= 20){ desconto = 0.03; }
            else { desconto = 0.05; }
            break;

        default:
            printf("\nEsse valor é inválido.");
            break;
    }

    total = valor * litros * (1- desconto);

    printf("\nO valor a ser pago será de R$%.2f\n", total);
}

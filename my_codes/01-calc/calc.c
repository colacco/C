// 10/03/2025: Basic calculator program
// 11/03/2025: Including Exponential

#include <stdio.h>
#include <math.h>
#include "operadores.h"

int main() {
    int is_running = 1;
    int sair = 7;
    float valor1;
    float valor2;
    int opcao;

    arte();

    while(is_running){
        valor1, valor2, opcao = ux(valor1, valor2, opcao); // corrigir essa função para que seja minimamente aceitavel

        if(opcao == sair){
            is_running = 0;
        } else {
            calculadora(valor1, valor2, opcao);
        }
    }
}

void arte(){
    printf("Calculadora:\n");
    printf(" .\\\\            //. \n");
    printf(". \\ \\          / /. \n");
    printf(".\\  ,\\     /` /,.-  \n");
    printf(" -.   \\  /'/ /  .   \n");
    printf(" ` -   `-'  \\  -    \n");
    printf("   '.       /.\\`    \n");
    printf("      -    .-       \n");
    printf("      :`//.'        \n");
    printf("      .`.'          \n");
    printf("      .'            \n");
}

int ux(float valor1, float valor2, int opcao){
    printf("Selecione a operação que você gostaria de realizar.\n");
        printf(" 1.Soma\n 2.Multiplicação\n 3.Subtração\n 4.Divisão\n 5.Exponenciação\n 6.Raiz quadrado\n 7.Sair do programa\n");
        scanf("%i", &opcao);

        printf("\nDigite um valor: ");
        scanf("%f", &valor1);
        printf("Digite um outro valor: ");
        scanf("%f", &valor2);
        return valor1, valor2, opcao;
}
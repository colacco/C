#include <stdio.h>

/* 
    Requisitos:
    Fazer um reajuste de salário
    ler o salário atual
    escrever o salário com um aumento de 25%

    Matemática:
    25% = 0,25 = 1/4

    salario + salario/4 = salario * (5/4)
*/

int main(){
    float salario_atual;
    float salario_novo;

    printf("Insira o valor de seu salário: ");
    scanf("%f", &salario_atual);

    salario_novo = salario_atual * 5 / 4;

    printf("Seu novo salário será de R$%.2f\n", salario_novo);
}
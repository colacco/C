#include <stdio.h>

/* Requisitos: 
    Ler número da conta do cliente, saldo, débito e crédito.
    Escrever o Saldo atual e informar se está com saldo positivo ou negativo.
*/

int main(){
    int id_conta;
    float saldo_atual;
    float saldo, debito, credito;

    printf("Qual é o ID da sua conta?: ");
    scanf("%i", &id_conta);
    printf("Insira seu saldo (R$): ");
    scanf("%f", &saldo);
    printf("Insira o valor de débito (R$): ");
    scanf("%f", &debito);
    printf("Insira o valor de crédito (R$): ");
    scanf("%f", &credito);
    
    saldo_atual = saldo - debito + credito;

    if (saldo_atual >= 0){
        printf("Saldo positivo.\n");
    } else{
        printf("Saldo negativo.\n");
    }
    printf("Seu saldo atual é de: R$%.2f\n", saldo_atual);
}
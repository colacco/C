#include <stdio.h>

int main(){
    float comprimento, largura, altura;
    float volume;

    printf("Insira o valor do comprimento (un): ");
    scanf("%f", &comprimento);
    printf("Insira o valor da largura (un): ");
    scanf("%f", &largura);
    printf("Insira o valor da altura (un): ");
    scanf("%f", &altura);

    volume = comprimento * largura * altura;

    printf("O volume dessa caixa retangular é de %.2fun³\n", volume);
}
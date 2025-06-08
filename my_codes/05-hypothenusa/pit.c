#include <stdio.h>
#include <math.h> // para aceitar variáveis, é preciso fazer o gcc pit.c -lm

int main(){
    float hip;
    float cat1;
    float cat2;
    char option;
    float raiz1;
    float raiz2;
    float soma;
    float sub;

    printf("Você quer descobrir a hipotenusa ou cateto?");
    scanf("%c", &option);

    switch (option){
        case 'h':
            int resultado;
            printf("Insira o valor do cateto 1: ");
            scanf("%f", &cat1);
            printf("Insira o valor do cateto 2:");
            scanf("%f", &cat2);

            raiz1 = pow(cat1, 2); 
            raiz2 = pow(cat2, 2);
            soma = raiz1 + raiz2;
            hip = sqrt(soma);

            printf("A  hipotenusa desse triângulo é %.2f\n", hip);

            break;
        case 'c':
            printf("Insira o valor da hipotenusa: ");
            scanf("%f", &hip);
            printf("Insira o valor do cateto: ");
            scanf("%f", &cat1);

            raiz1 = pow(cat1, 2); 
            raiz2 = pow(cat2, 2);
            sub = raiz1 - raiz2;
            cat2 = sqrt(sub);

            printf("O outro cateto desse triângulo é %f", cat2);

            break;
    
    default:
        break;
    }
}
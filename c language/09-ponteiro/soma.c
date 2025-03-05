//  Escreva uma função soma que recebe um ponteiro de inteiro 'num' e mais dois inteiros 'a' e 'b'. A função deve cacular a soma de 'a'+'b' em 'num'
#include <stdio.h>

soma(int*resultado, int a, int b){
    (*resultado) = a + b;
}

int main(){
    int num;
    int a;
    int b;

    printf("Digite um valor:");
    scanf("%d", &a);
    printf("Digite outro valor:");
    scanf("%d", &b);

    soma(&num, a, b);

    printf("A soma entre %d e %d é igual a %d", a, b, num);
}
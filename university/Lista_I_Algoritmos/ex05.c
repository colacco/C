#include <stdio.h>

// Requisitos: ler 3 notas, returnar uma média ponderada de peso 2, 3 e 5.

int main(){
    float n1, n2, n3;
    float media;

    printf("Insira a nota da prova n1: ");
    scanf("%f", &n1);
    printf("Insira a nota da prova n2: ");
    scanf("%f", &n2);
    printf("Insira a nota da prova n3: ");
    scanf("%f", &n3);

    media = ((n1 * 2.0) + (n2 * 3.0) + (n3 * 5.0))/10.0;

    printf("A média ponderada das provas n1, n2 e n3 é %.1f\n", media);
}
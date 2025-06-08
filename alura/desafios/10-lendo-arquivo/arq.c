// Escreva um código que abre o arquivo "teste.txt" em modo somente leitura.
#include <stdio.h>
#include <stdlib.h>

int main() {
    int numero;
    FILE* f;

    if (f == 0){
        exit(1);
    }
    
    f = fopen("teste.txt", "r");
    fscanf(f, "%d", &numero);

    printf("O núemro do arquivo teste.txt é: %d\n", numero);

    fclose(f);
}
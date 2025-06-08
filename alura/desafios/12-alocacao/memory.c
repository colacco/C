#include <stdio.h>
#include <stdlib.h>

char** matriz;
int linhas;
int colunas;

void liberamapa(){
    free(matriz);
    for(int i = 0; i < linhas; i++){
        free(matriz[i]);
    }
}

int main(){

    matriz = malloc(sizeof(char*) * linhas);
    for(int i = 0; i < linhas; i++){
        matriz[i] = malloc(sizeof(char) * (colunas+1));
    }

    liberamapa();
}
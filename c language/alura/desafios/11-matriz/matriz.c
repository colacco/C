//Imprima uma matriz de inteiros matriz[20][10] utilizando-se de dois for.
#include <stdio.h>

int main() {
    int linha = 20;
    int coluna = 10;

    char x[linha][coluna+1];

    FILE* f;
    f = fopen("x.txt", "r");

    for(int i = 0; i < linha; i++){
    fscanf(f, "%s", x[i]);
    }

    for (int i = 0; i < linha; i++){
        for (int j = 0; j < coluna; j++){
            printf("%c", x[i][j]);
        }    
        printf("\n");
    }
    fclose(f);
}
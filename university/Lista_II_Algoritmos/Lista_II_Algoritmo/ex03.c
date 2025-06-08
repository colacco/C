#include <stdio.h>

void lermatriz(int linha, int coluna, int matriz[linha][coluna]){
    for (int i = 0; i < linha; i++){
        for (int j = 0; j < coluna; j++){
            printf("Valor de matriz[%d][%d]: ", i, j);
            scanf("%d", &matriz[i][j]);
        } 
    }
}

void printMatriz(int matriz[5][5], int indice){
    for (int i = 0; i < indice; i++){
        for (int j = 0; j < indice; j++){
            printf("%i ", matriz[i][j]);
        }
        printf("\n");
    }
}

void somaMatriz(int valor1[5][5], int valor2[5][5], int resultado[5][5], int indice){
    for (int i = 0; i < indice; i++){
        for (int j = 0; j < indice; j++){
            resultado[i][j] = valor1[i][j] + valor2[i][j];
        }
    }
}

int main(){
    int indice = 5, matrizsoma[indice][indice];
    int matrizA[5][5];
    int matrizB[5][5];

    printf("Matriz A: \n");
    lermatriz(indice, indice, matrizA);
    printf("\n");

    printf("Matriz B: \n");
    lermatriz(indice, indice, matrizB);
    printf("\n");

    printf("A soma entre a matriz: \n");
    printMatriz(matrizA, indice);

    printf("e a matriz: \n");
    printMatriz(matrizB, indice);
    
    printf("É igual a: \n");  
    somaMatriz(matrizA, matrizB, matrizsoma, indice);
    printMatriz(matrizsoma, indice);

    return 0;
}
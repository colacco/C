#include <stdio.h>

void lermatriz(int linha, int coluna, int matriz[linha][coluna]){
    for (int i = 0; i < linha; i++){
        for (int j = 0; j < coluna; j++){
            printf("Valor de matriz[%d][%d]: ", i, j);
            scanf("%d", &matriz[i][j]);
        } 
    }
}

void printMatriz(int matriz[3][3], int indice){
    for (int i = 0; i < indice; i++){
        for (int j = 0; j < indice; j++){
            printf("%i ", matriz[i][j]);
        }
        printf("\n");
    }
}

void multiplicacaoMatriz(int valor1[3][3], int valor2[3][3], int resultado[3][3], int indice){
    for (int i = 0; i < indice; i++){
        for (int j = 0; j < indice; j++){
            resultado[i][j] = valor1[i][j] * valor2[i][j];
        }
    }
}

int main(){
    int matrizA[3][3] = {{1,2,3}, {1,2,3}, {1,2,3}};
    int matrizB[3][3] = {{1,2,3}, {1,2,3}, {1,2,3}};
    int indice = 3, matrizR[indice][indice];


    printf("Matriz A: \n");
    lermatriz(indice, indice, matrizA);
    printf("\n");

    printf("Matriz B: \n");
    lermatriz(indice, indice, matrizB);
    printf("\n");

    printf("A  multiplicação entre a matriz: \n");
    printMatriz(matrizA, indice);
    
    printf("e a matriz: \n");
    printMatriz(matrizB, indice);
    
    printf("é igual a: \n");
    multiplicacaoMatriz(matrizA, matrizB, matrizR, indice);
    printMatriz(matrizR, indice);

    return 0;
}
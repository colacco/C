#include <stdio.h>
// n(A U B) = n(A) + n(B) - n(A ∩ B)

int existe(int array[], int tamanho, int valor){
    for (int i = 0; i < tamanho; i++){
        if (array[i] == valor){
            return 1;
        }
    }
    return 0;
}

void scanarray(int indice, int *array){
    for (int i = 0; i < indice; i++){
        printf("Valor %d: ", i + 1);
        scanf("%d", &array[i]);
    }
}

void printarray(int indice, int *array){
    for (int i = 0; i < indice; i++){
        printf("%i ", array[i]);
    }
}

void incluirNaUniao(int indice, int *array, int *indiceUniao, int *uniao){
    for (int i = 0; i < indice; i++){
        uniao[*indiceUniao] = array[i];
        (*indiceUniao)++;
    }
}

int main(){
    int indice = 20, indiceFinal = indice * 2;
    int resultado[indiceFinal], uniao[indiceFinal];
    int vetor1[indice],vetor2[indice];
    int indiceUniao = 0;

    scanarray(indice, vetor1);
    scanarray(indice, vetor2);

    incluirNaUniao(indice, vetor1, &indiceUniao, uniao);
    incluirNaUniao(indice, vetor2, &indiceUniao, uniao);

    int tamanhoAtual = 0;
    for (int i = 0; i < indiceFinal; i++){
        if (!existe(resultado, tamanhoAtual, uniao[i])){
            resultado[tamanhoAtual] = uniao[i];
            tamanhoAtual++;
        }
    }
    
    printf("União sem elementos repetidos: \n");
    printarray(tamanhoAtual, resultado);
    return 0;
}

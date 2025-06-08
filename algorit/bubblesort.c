#include <stdio.h>

void troca(int *a, int *b){
    if (*a > *b){  // Se o array na posição j for maior que o array na posição j+1, troque.
        int temp = *a; // crie uma cópia
        *a = *b;
        *b = temp;
    } 
}


void bubbleSort(int *arr, int n){ // para um Bubble sort, precisamos de um array e o tamanho dele.
    int i, j; // definição das variáveis utilizáveis
    for (i = 0; i < n - 1; i++){ // Faça um looping até i alcançar a última posição do array (n-1).
        for (j = 0; j < n - i - 1; j++){ // Faça um lopping até j alcançar a última posição do array e esse número reduz conforme i aumenta.
            troca(&arr[j], &arr[j+1]);
        }
    }
}

void printArray(int *arr, int size){
    for (int i = 0; i < size; i++){
        printf ("%d, ", arr[i]);
    }
    printf("\n");
}

int main(){
    int dados[] = {64, 34, 25, 12, 22, 11, 90};
    int n = sizeof(dados) / sizeof(dados[0]);

    printf("Array original: \n");
    printArray(dados, n);

    bubbleSort(dados, n);

    printf("Array ordenado com Bubble Sort:\n");
    printArray(dados, n);

    return 0; // por padrão, como é uma função int, é interessante criar essa rotina de colocar return 0;
              // Omitir "return 0;" não é errado, mas escrever é elegante.
}
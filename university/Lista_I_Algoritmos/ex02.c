#include <stdio.h>

void asc(int *a, int *b){
    if (*a > *b){  // Se o array na posição j for maior que o array na posição j+1, troque.
        int temp = *a; // crie uma cópia
        *a = *b;
        *b = temp;
    } 
}

void desc(int *a, int *b){
    if (*a < *b){  // Se o array na posição j for maior que o array na posição j+1, troque.
        int temp = *a; // crie uma cópia
        *a = *b;
        *b = temp;
    } 
}


void bubblesort(int *arr, int tamanho, int crescente){ // para um Bubble sort, precisamos de um array e o tamanho dele.
    int i, j; // definição das variáveis utilizáveis
    for (i = 0; i < tamanho - 1; i++){ // Faça um looping até i alcançar a última posição do array (n-1).
        for (j = 0; j < tamanho - i - 1; j++){ // Faça um lopping até j alcançar a última posição do array e esse número reduz conforme i aumenta.
            if (crescente){
                asc(&arr[j], &arr[j+1]);
            } else {
                desc(&arr[j], &arr[j+1]);
            }
        }
    }
}

void podio(int *array, int tamanho){
    int temp;

            for (int i = 0; i <= tamanho - 1; i++){
                if (array[i] >= array[0] && array[i] >= array[1] && array[i] >= array[2]){
                    temp = array[1];
                    array[1] = array[i];
                    array[i] = temp;
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
    int array[3], opcao;
    int tamanho = 3;

    printf("Insira um valor: ");
    scanf("%i", &array[0]);
    printf("Insira outro valor: ");
    scanf("%i", &array[1]);
    printf("Insira mais um valor: ");
    scanf("%i", &array[2]);

    printf("Escolha uma opção: \n");
    printf("1. Ordem crescente\n");
    printf("2. Ordem decrescente\n");
    printf("3. Maior valor no meio\n");
    scanf("%d", &opcao);

    switch (opcao){
        case 1:
            bubblesort(array, tamanho, 1);
            break;
        case 2:
            bubblesort(array, tamanho, 0);
            break;
        case 3:
            podio(array, tamanho);
            break;
        default:
            printf("Opção inválida");
            break;
    }
    
    printArray(array, tamanho);
}

/*
    Raciocínio:
    Como sabemos o que é o maior número? R: É preciso fazer comparações.
    Como fazer comparações de forma eficiente? R: Com Loopings?

    Para pegar o maior valor no meio, como temos apenas 3 valores, podemos comparar todos os valores e realizar uma troca para o array de posição 1.
*/
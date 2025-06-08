#include <stdio.h>

void bubblesort(int arr[], int tamanho){
    for (int i = 0; i < tamanho; i++){
        for (int j = 0; j < tamanho; j++){
            if (arr[i] < arr[j]){
                int temp;

                temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }

    for (int i = 0; i < tamanho; i++){
        printf("%i ", arr[i]);
    }
    
}

int main(){
    int arr[] = {0, 8, 9, 7, 1, 2, 6, 5, 3, 4};
    int tamanho = sizeof(arr)/sizeof(arr[0]);

    bubblesort(arr, tamanho);
}
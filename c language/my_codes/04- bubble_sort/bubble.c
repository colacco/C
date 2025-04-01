#include <stdio.h>

int main(){
    int array[5] = {5, 3, 8, 4, 6};


    
    
    
}

void BubbleSort(int array[], int n){
    int temp;

    for (int pass = 0; pass < n-1; pass++){ // looping externo
        for (int i = 0; i < n - 1 - pass; i++){ //lopping interno
            if (array[i] > array[i+1]){
                temp = array[i];
                array[i] = array[i+1];
                array[i+1] = temp;
            }
            
        }
    }   
}

void PrintArray(int array[], int n){
    for (int i = 0; i < n-1; i++){
        /* code */
    }
    
}
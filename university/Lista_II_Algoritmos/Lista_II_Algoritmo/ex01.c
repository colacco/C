#include <stdio.h>

void printarray(int indice, int array[indice]){
    for (int i = 0; i < indice; i++){
        printf("%i ", array[i]);
    }
}

void scanarray(int indice, int array[indice]){
    for (int i = 0; i < indice; i++){
        printf("Valor %d: ", i + 1);
        scanf("%d", &array[i]);
    }
}

int main(){
    int indice = 30;
    int vetor1[indice];
    int vetor2[indice];

    scanarray(indice, vetor1);
    
    for (int i = 0; i < indice; i++){
        if(vetor1[i] % 2 == 0){
            vetor2[i] = vetor1[i] * 2;
        } else {
            vetor2[i] = vetor1[i] * 3;
        }
    }
    
    printf("\n");
    printarray(indice, vetor2);
    
    return 0; 
}
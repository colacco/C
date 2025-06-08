#include <stdio.h>
#include <stdlib.h>

int main(){
    /*
    Como o array já é um ponteiro, apenas o '*' já serve para simbolizar isso.
    Multiplique pelo tamanho do tipo da variável a quantidade de 'gavetas' você quer que tenha no array.


    int* v = malloc(sizeof(int) * 50); O resultado dentro do parênteses é a qntd de bytes que a máquina reserva à variável durante a execução.

    v[1] = 10;

    printf("inteiro alocado %d\n", v[1]);

    free(v);
    

    libera a memória que tinha sido reservada.
    */

    int** v = malloc(sizeof(int*) * 5); //ponteiro de ponteiros
    for(int i = 0; i < 5; i++){
        v[i] = malloc(sizeof(int) * 10);
    }

    v[1][2] = 10;
    v[0][9] = 70;

    printf("inteiro alocado %d %d\n", v[1][2], v[0][9]);

    for (int i = 0; i < 5; i++){
        free(v[i]);
    }
    
    free(v);
}
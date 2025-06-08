#include <stdio.h>

int main(){
    int valor;

    printf("xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx\n");
    printf("                     TABUADA                         \n");
    printf("xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx\n");

    printf("Insira o número que você deseja saber a tabuada: ");
    scanf("%d", &valor);

    for(int i = 0; i <= 10; i++){
        int resultado = valor * i;
        printf("%d x %d = %d\n", valor, i, resultado);
    }
}

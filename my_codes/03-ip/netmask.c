#include <stdio.h>

int main(){
    int numero1;
    int resultado1;
    
    printf("Insira o valor do ip sem pontos");

    if (numero1 == 255){
        resultado1 = 11111111;
    }
    

}


int binary(int numero){
    char binario[20];
    char binario_invertido[20];

    if (numero == 0){
        binario[0] = 0;
        return printf("O valor em binário: 0\n");
    }

    while (numero != 0){
        resto = numero % 2;
        binario_invertido[indice1] = resto + '0';
        //adiciona o resto (int) em caracrcteres (char) em um array;

        indice1 ++;
        numero /= 2;
    }
    
    maximo = indice1;
    for (int i = 0; i <= maximo; i++){
        binario[i] = binario_invertido[indice1-1];
        indice1--;
    }

    return printf("O valor em binário: %s\n", binario);
}
#include <stdio.h>

int soma(int nums[], int ind){
    int resultado = 0;
    for(int i = 0; i < ind; i++){ //esqueci do detalhe  que a posição 0 já é contabilizada!
        resultado += nums[i];
    }

    return resultado;
}

int main() {
    int nums[3];
    nums[0] = 10;
    nums[1] = 20;
    nums[2] = 30;

    int total = soma(nums, 3);

    printf("O resultado é %d\n", total);
}
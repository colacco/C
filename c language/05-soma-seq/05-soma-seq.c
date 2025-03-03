//Faça uma soma de todos os números de uma sequência

#include <stdio.h>

int main(){
    int count;

    while(1){
        int soma = 0;

        printf("Digite um número para que eu possa somar de 0 até esse valor. (digite 0 para encerrar):");
        scanf("%d", &count);

        if (count < 0){
            printf("Só é aceito valores positivos.");
        } 
        else if (count == 0){
            break;
        }
        else{
            for (int i = 0; i <= count; i++)
            {
            soma += i;
            }
            printf("A soma de 0 até %d é igual a %d.\n", count, soma);
        }
    }
}
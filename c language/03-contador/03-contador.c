// Desafio proposto era para fazer um contador de 0 a 100. Acabei por dar a oportunidade do usuário escolher até qual número ele quer.

#include <stdio.h>

int main(){
    int count;

    while (1)
    {
        printf("Até que número você quer que eu escreva? (digite 0 para encerrar): ");
        scanf("%d", &count);
        
        if (count < 0){
            printf("O contador só considera números positivos.\n");
        }
        else if(count == 0){
            break;
        }
        else{
            for (int i = 0; i <= count; i++){
            printf("%d\n", i);
            }
        }
    }
}

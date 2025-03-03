// mesmo esquema do exercício 3, porém utilizando o while.
#include <stdio.h>

int main(){
    int count;
    int i = 0;

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
            while(i <= count){
                printf("%d\n", i);
                i++;
            }
        }
    }
}
#include <stdio.h>
#include <string.h>

int main(){
    char password[12 + 1];
    int pontos = 0;
    int tamanho;

    // tem  que ter comprimento, caracteres especiais e números.

    printf("Crie uma senha: ");
    scanf("%s", password);

    
    // calcula o tamanho da senha
    tamanho = strlen(password);
    if (tamanho < 8){
        printf("A senha deve conter no mínimo 8 caracteres.\n");
    } else if (tamanho < 10){
        pontos += 1;
    } else if (tamanho < 13){
        pontos += 3;
    } else {
        printf("Essa senha ultrapassa os limites.\n");
    }

    // verifica se há um caractere além das letras do alfabeto grego
    for (int i = 0; password[i] != '\0'; i++){
        if (password[i] < 'A' || password[i] > 'Z'){
            printf("No looping max, temos um caractere diferente na posição: %i\n", i + 1);
            pontos += 1;
        }
        
    }

    for (int i = 0; password[i] != '\0'; i++){
        if (password[i] < 'a' || password[i] > 'z'){
            printf("No looping min, temos um caractere diferente na posição: %i\n", i + 1);
            pontos += 1;
        }
    }

    for (int i = 0; password[i] != '\0'; i++){
        if (password[i] < '0' || password[i] > '9'){ 
            /* code */
        }
        
    }

    
    
}
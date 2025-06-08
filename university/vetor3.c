#include <stdio.h>

int main(){
    char nome[30], curso[50], email[50];
    printf("Entre com o nome: ");
    fgets(nome, 30, stdin); // stdin = standard input.
    printf("Entre com o curso: ");
    // getchar(); Força parada
    fgets(curso, 50, stdin);
    printf("Entre com o email: ");
    fgets(email, 50, stdin);

    
    printf("%s %s %s", nome, curso, email);
}
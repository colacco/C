#include <stdio.h>

int main() {
    char palavrasecreta[20]; // define um array de 20 espaços (0 a 19)

    sprintf(palavrasecreta, "MELANCIA"); //coloca a cadeia de caracteres dentro dos espaços do array, no final adiciona um \0 no array
    // Ela não imprime a palavra, apenas registra na memória. 

    printf("%s\n", palavrasecreta); // Com o %s, a máquina irá ler até o \0

    /*
    palavrasecreta[0] = 'M'; 
    palavrasecreta[1] = 'E';
    palavrasecreta[2] = 'L';
    palavrasecreta[3] = 'A';
    palavrasecreta[4] = 'N';
    palavrasecreta[5] = 'C';
    palavrasecreta[6] = 'I';
    palavrasecreta[7] = 'A';
    palavrasecreta[8] = '\0'; -> 0, não representa nada
    
    printf("%c%c%c%c%c%c%c%c", palavrasecreta[0], palavrasecreta[1], palavrasecreta[2], palavrasecreta[3], palavrasecreta[4], palavrasecreta[5], palavrasecreta[6], palavrasecreta[7]);
    */
    // Essa forma além de poluir o código, é difícil de escrever por exigir muitas repetições desnecessárias.
}
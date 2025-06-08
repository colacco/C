#include <stdio.h>

void calcula(int* c){ // ela se torna um ponteiro para um inteiro
    //printf("calcula %d %d\n", c, &c);
    printf("calcula %d %d\n", (*c), c); // para acessar esse conteudo, é preciso colocar (*c), caso o contrário a variável por si só seria o endereço de memória.
    (*c)++;
    printf("calcula %d %d\n", (*c), c);
    
}


int main(){
    
    int c = 10;

    printf("main %d %d\n", c, &c);
    calcula(&c); // você está enviando o endereço de memória para a função
    printf("main %d %d\n", c, &c);
}

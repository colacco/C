#include <stdio.h>
// Essa lista é uma aproximação em horas da distância entre países em um avião comercial. 
// Como é apenas um detalhe sutil que não interfere na lógica, foi utilizado de IA para determinar quais países seriam utilizados.
int listaPaises(){
    int valor;

    printf("1. Reino Unido\n");
    printf("2. França\n");
    printf("3. Estados Unidos\n");
    printf("4. Alemanha\n");
    printf("5. Rússia\n");
    printf("6. México\n");
    printf("7. Portugal\n");     

    printf("Digite o número do país que deseja: ");
    scanf("%i", &valor);
    valor --; // Como a posição começa no número 0 na matriz, é necessário esse reajuste.
    return valor;
}

void duracao(int origem, int destino){
    int matriz[7][7] = {{0, 2, 11, 6, 15, 11, 1},
                        {2, 0, 7, 12, 4, 2, 15},
                        {11, 7, 0, 11, 8, 3, 13},
                        {6, 12, 11, 0, 10, 2, 1},
                        {15, 4, 8, 10, 0, 5, 13},
                        {11, 2, 3, 2, 5, 0, 14},
                        {1, 15, 13, 1, 13, 14, 0}};
    
    printf("A duração da viagem irá durar %i horas.", matriz[origem][destino]);
}

int main(){
    int origem;
    int destino;

    printf("Escolha seu país de origem: \n ");
    origem = listaPaises();

    printf("\nEscolha seu país de destino: \n");
    destino = listaPaises();

    duracao(origem, destino);

    return 0;
}
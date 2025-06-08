#include <stdio.h>

struct dvd{
    char artista[50];
    char nomeAlbum[25];
    char estiloMusical[15];
    char gravadora[50];
    int ano;
    float preco;
};

struct dvd dvd01;

void registrar(struct dvd *exemplo){
    printf("Insira o nome do artista: ");
    fgets(dvd01.artista, sizeof(exemplo->artista), stdin);
    printf("Insira o nome do album: ");
    fgets(dvd01.nomeAlbum, sizeof(exemplo->nomeAlbum), stdin);
    printf("Insira estilo musical: ");
    fgets(dvd01.estiloMusical, sizeof(exemplo->estiloMusical), stdin);
    printf("Insira a gravadora: ");
    fgets(dvd01.gravadora, sizeof(exemplo->gravadora), stdin);
    printf("Insira o ano: ");
    scanf("%d", &exemplo->ano);
    printf("Insira o preço: ");
    scanf("%f", &exemplo->preco);
    printf("\n");
    getchar();
}

void display(struct dvd exemplo){
    printf("\n\nESPECIFICAÇÃO: \n");
    printf("Album: %s", exemplo.nomeAlbum);
    printf("Artista: %s", exemplo.artista);
    printf("Ano: %i\n", exemplo.ano);
    printf("Estilo: %s", exemplo.estiloMusical);
    printf("Gravadora: %s", exemplo.gravadora);
    printf("preco: %.2f\n", exemplo.preco);
}

int main(){
    registrar(&dvd01);
    display(dvd01);
}
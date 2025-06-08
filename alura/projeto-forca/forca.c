#include <stdio.h>   // Sempre que tiver dificuldade na compreensão do código, utilize de printf() para conseguir entender perfeitamente.
#include <string.h> // importa strlen().
#include <time.h>
#include <stdlib.h>
#include "forca.h" // Header files, não se preocupe com quem vem primeiro!


char palavrasecreta[TAMANHO_PALAVRA]; // variáveis globais
char chutes[26];
int chutesdados = 0;

void abertura() { // VOID NÃO RETORNA VARIÁVEL
    printf("************************************\n");
    printf("*           Jogo de Forca          *\n");
    printf("************************************\n");
}

int tem_na_palavra(char letra){ //RETORNA UMA VARIÁVEL
    int achou = 0; //FALSO

    for(int j = 0; j < chutesdados; j++){
        if(chutes[j] == letra){
            achou = 1; // VERDADEIRO
            break;
        }
    }
    return achou;
}

void chuta() { //variável chutes aponta para o primeiro endereço de memória desse inteiro, ele é um ponteiro em essência.
    char chute;
    scanf(" %c", &chute); // o espaço entre o " e % é importante para evitar que a tecla Enter seja lida.
    chutes[chutesdados] = chute;
    chutesdados++;
}

void desenhaforca(){

    int erros;
    
    printf("  _______         \n");
    printf(" |/      |        \n");
    printf(" |      %c%c%c        \n", (erros >= 1 ? '(' : ' '),(erros >= 1 ? '_' : ' '), (erros >= 1 ? ')' : ' '));
    printf(" |      %c%c%c        \n", (erros >= 2 ? '\\' : ' '), (erros >= 2 ? '|' : ' '), (erros >= 2 ? '/' : ' '));
    printf(" |       %c        \n", (erros >= 3 ? '|' : ' '));
    printf(" |      %c %c      \n", (erros >= 4 ? '/' : ' '), (erros >= 4 ? '\\' : ' '));
    printf(" |                \n");
    printf("_|__              \n");
    printf("\n\n");

    for(int i = 0; i < strlen(palavrasecreta); i++){
        int achou = tem_na_palavra(palavrasecreta[i]);

        if (achou){
            printf("%c ", palavrasecreta[i]);
        } else {
            printf("_ ");
        }
    }
    printf("\n");
}

void adicionapalavra() {

    char quer;

    printf("Você deseja adicionar uma palavra ao jogo? (S/N)");
    scanf(" %c", &quer);

    if (quer == 'S'){

        char novapalavra[TAMANHO_PALAVRA];
        printf("Qual a nova palavra? ");
        scanf("%s", novapalavra);

        FILE* f;

        f = fopen("palavras.txt", "r+"); // r+ é leitura e escrita.
        if(f == 0){
            printf("Desculpe, banco de daos não disponível\n\n");
            exit(1);
        }

        int qtd;
        fscanf(f, "%d", &qtd);
        qtd++; // somou a numeração da linha 1
        fseek(f, 0, SEEK_SET); // reposicionou o ponteiro para o início
        fprintf(f, "%d", qtd);

        fseek(f, 0, SEEK_END); // vai para o final do arquivo.
        fprintf(f, "\n%s", novapalavra);
        fclose(f);
    }
    
}

void escolhepalavra() {
    FILE* f;
    
    f = fopen("palavras.txt", "r");
    if(f == 0){
        printf("Desculpe, banco de daos não disponível\n\n");
        exit(1);
    }

    int qtddepalavras;
    fscanf(f, "%d", &qtddepalavras);

    srand(time(0));

    int randomico = rand() % qtddepalavras;

    for(int i = 0; i <= randomico; i++){
        fscanf(f, "%s", palavrasecreta);
    }

    fclose(f);
}

int acertou(){
    for (int i = 0; i < strlen(palavrasecreta); i++){
        if(!tem_na_palavra(palavrasecreta[i])){
            return 0;
        }
    }
    return 1;
    
}

int chuteserrados() {
    int erros = 0;

    for (int i = 0; i < chutesdados; i++){
        if(!tem_na_palavra(palavrasecreta[i])){
            erros++;
        }
    }
    return erros;
}

int enforcou() {
    return chuteserrados() >=5;
}

void comemora(){
    if(acertou()){
        printf("\n Parabéns, você ganhou!\n\n");

        printf("     ___________\n");
        printf("    '._==_==_=_.'\n");
        printf("    .-\\:      /-.\n");
        printf("   | (|:.     |) |\n");
        printf("    '-|:.     |-'\n");
        printf("      \\::.    /\n");
        printf("       '::. .'\n");
        printf("         ) (\n");
        printf("       _.' '._\n");
        printf("     `""""""""`\n");
    } else {
        printf("\nPuxa, você foi enforcado!\n");
        printf("A palavra era **%s**\n\n", palavrasecreta);

        printf("   _____\n");
        printf("  /     \\\n");
        printf(" | () () |\n");
        printf(" \\  ^  /\n");
        printf("   |||||\n");
        printf("   |||||\n");

    }
}

int main() {
    escolhepalavra();
    abertura();

    do{ // Esse loop faz com que seja lido primeiro o código para depois responder à condição exigida.
        desenhaforca();
        chuta(); // Os dois são ponteiros
    } while(!acertou() && !enforcou());
    comemora();
    adicionapalavra();
}
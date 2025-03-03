#include <stdio.h> // diretiva que inclui a biblioteca que está contido o printf()
//#define limite 5 //diretiva que permite adicionar uma constante.

int main(){ // define a função principal do programa 
    printf("***************************************\n");
    printf("*Bem vindo ao nosso jogo de advinhação*\n");
    printf("***************************************\n"); //contra barra + n é como o enter para nós humanos 

    int numerosecreto = 42; // para definir variáveis na linguagem C é preciso adicionar o tipo de dado que a variável é
    //int numerosecreto = 27; "diferente do python, não é possível fazer com que a variável possua dois valores diferentes!"
    //printf("O número %d é o secreto.\n", numerosecreto);"o %d se refere o local em que a variável numerosecreto será substituida na frase"

    int chute;
    int tentativa = 1;

    while (1){

        printf("Tentativa %d.\n", tentativa);
        printf("Qual é o seu chute? ");
        scanf("%d", &chute); // Função que lê e atribui o input à variável chute. Mesmo colocando que será uma variável int, ao colocar letras, o programa grava números
        printf("Seu chute foi %d\n", chute);

        if (chute < 0){
            printf("Você não pode chutar números negativos!\n");
            continue; // Pula para a próxima repetição
        }
        
        int acertou = chute == numerosecreto; // 0 para falso e 1 para verdadeiro.
        int maior = chute > numerosecreto;

        if(acertou) { // não é muito diferente de Python, apenas a inserção de chaves.
            printf("Parabéns! Você acertou!\n");
            printf("Jogue de novo, você é um bom jogador!\n");
            break; //Quebre o looping independente da condição.
        }
        else if (maior){
            printf("Seu chute foi maior que o número secreto.\n");
        }
        else {
            printf("Seu chute foi menor que o número secreto.\n");
        }
        tentativa++;
    }
    printf("Fim de jogo!\n");
    printf("Você acertou em %d tenativas.\n", tentativa-1);
    // printf("maior %d\n", maior), da erro pelo fato de não estar no escopo da variável.
}
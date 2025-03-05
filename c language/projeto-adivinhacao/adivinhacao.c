#include <stdio.h> // diretiva que inclui a biblioteca que está contido o printf()
#include <stdlib.h> // diretiva que permite o uso do abs()
#include <time.h> // diretiva que permite o uso de time ()
//#define limite 5 //diretiva que permite adicionar uma constante.

int main(){ // define a função principal do programa 
    printf("*******************************************************\n");
    printf("                                                       \n");
    printf("      .^.                                        .^.   \n");
    printf("    ,-.|,-.  Bem vindo ao jogo de adivinhação  ,-.|,-. \n");
    printf("       v                                          v    \n");
    printf("                                                       \n");
    printf("*******************************************************\n"); // \n é como o enter para nós humanos 

    int segundos = time(0);
    srand(segundos);
    int numerogrande = rand(); 


    //Não é possível fazer com que a variável possua dois valores diferentes!
    // para definir variáveis na linguagem C é preciso adicionar o tipo de dado que a variável é
    //printf("O número %d é o secreto.\n", numerosecreto); %d se refere o local que a variável será substituida.
    int chute; // Quando você dar printf(), irá ser o valor de uma variável de um programa anterior já utilizado no mesmo espaço.
    int tentativa = 1;
    double pontos = 1000;
    int numerosecreto = numerogrande % 100; 

    int acertou = 0;

    int nivel;
    printf("Qual o nível de dificuldade?\n");
    printf("(1): Fácil, (2): Médio, (3): Difícil\n\n");
    printf("Escolha: ");
    scanf("%d", &nivel);

    int numerodetentativas;

    switch (nivel){ //switch possui um comportamento estranho. Por isso sempre adicione o break.
        case 1:
            numerodetentativas = 10;
            break;
        case 2:
            numerodetentativas = 7;
            break;
        case 3:
            numerodetentativas = 3;
            break;
    }

    if(nivel == 1){
        numerodetentativas = 10;
    }
    else if (nivel == 2){
        numerodetentativas = 7; // se o usuário entender de pesquisa binária, resolve fácil.
    } else {
        numerodetentativas = 3;
    }
    
    for (int i = 1; i<= numerodetentativas; i++){

        printf("Tentativa %d.\n", tentativa);
        printf("Qual é o seu chute? ");
        scanf("%d", &chute); // Lê e atribui o input à variável chute. Se colocar letras na variável int, o programa grava números.
        printf("Seu chute foi %d\n", chute);

        if (chute < 0){
            printf("Você não pode chutar números negativos!\n");
            continue; // Pula para a próxima repetição
        }
        
        acertou = (chute == numerosecreto); // 0 para falso e 1 para verdadeiro.
        int maior = chute > numerosecreto;

        if(acertou) { // não é muito diferente de Python, apenas a inserção de chaves.
            break; //Quebre o looping independente da condição.
        }
        else if (maior){
            printf("Seu chute foi maior que o número secreto.\n");
        }
        else {
            printf("Seu chute foi menor que o número secreto.\n");
        }
        tentativa++;

        double pontosperdidos = abs(chute - numerosecreto) / (double)2; // coloque o 2.0 para a máquina entender que pode fazer como double // abs - valor absoluto
        pontos -= pontosperdidos;
    }

    printf("Fim de jogo!\n");

    if (acertou){
        printf("Você ganhou!\n");
        printf("                  __ooooooooo__\n");
        printf("            oOOOOOOOOOOOOOOOOOOOOOo\n"); 
        printf("        oOOOOOOOOOOOOOOOOOOOOOOOOOOOOOo\n"); 
        printf("      oOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOo\n"); 
        printf("    oOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOo\n"); 
        printf("  oOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOo\n"); 
        printf("  oOOOOOOOOOOO*  *OOOOOOOOOOOOOO*  *OOOOOOOOOOOOo\n"); 
        printf(" oOOOOOOOOOOO      OOOOOOOOOOOO      OOOOOOOOOOOOo\n"); 
        printf(" oOOOOOOOOOOOOo  oOOOOOOOOOOOOOOo  oOOOOOOOOOOOOOo\n"); 
        printf("oOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOo\n"); 
        printf("oOOOO     OOOOOOOOOOOOOOOOOOOOOOOOOOOOOOO     OOOOo\n"); 
        printf("oOOOOOO OOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOO OOOOOOo\n"); 
        printf(" *OOOOO  OOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOO  OOOOO*\n"); 
        printf(" *OOOOOO  *OOOOOOOOOOOOOOOOOOOOOOOOOOOOO*  OOOOOO*\n"); 
        printf("  *OOOOOO  *OOOOOOOOOOOOOOOOOOOOOOOOOOO*  OOOOOO*\n"); 
        printf("   *OOOOOOo  *OOOOOOOOOOOOOOOOOOOOOOO*  oOOOOOO*\n"); 
        printf("     *OOOOOOOo  *OOOOOOOOOOOOOOOOO*  oOOOOOOO*\n"); 
        printf("       *OOOOOOOOo  *OOOOOOOOOOO*  oOOOOOOOO*\n");       
        printf("         *OOOOOOOOo           oOOOOOOOO*\n");       
        printf("             *OOOOOOOOOOOOOOOOOOOOO*\n");          
        printf("                  **ooooooooo**\n"); 
        printf("Você acertou em %d tenativas.\n", tentativa-1);
        printf("Total de pontos: %.2f\n.", pontos); //máscara de double é %f, o .2 significa quantas casas irão aparecer na interface
    } else {
        printf("                         oooo$$$$$$$$$$$$oooo\n");
        printf("                      oo$$$$$$$$$$$$$$$$$$$$$$$$o\n");
        printf("                   oo$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$o         o$   $$ o$\n");
        printf("   o $ oo        o$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$o       $$ $$ $$o$\n");
        printf("oo $ $ ""$      o$$$$$$$$$    $$$$$$$$$$$$$    $$$$$$$$$o       $$$o$$o$\n");
        printf("""$$$$$$o$     o$$$$$$$$$      $$$$$$$$$$$      $$$$$$$$$$o    $$$$$$$$\n");
        printf("  $$$$$$$    $$$$$$$$$$$      $$$$$$$$$$$      $$$$$$$$$$$$$$$$$$$$$$$\n");
        printf("  $$$$$$$$$$$$$$$$$$$$$$$    $$$$$$$$$$$$$    $$$$$$$$$$$$$$  """"$$$\n");
        printf("   ""$$$""""$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$     ""$$$\n");
        printf("    $$$   o$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$     ""$$$o\n");
        printf("   o$$""   $$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$       $$$o\n");
        printf("   $$$    $$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$" "$$$$$$ooooo$$$$o\n");
        printf("  o$$$oooo$$$$$  $$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$   o$$$$$$$$$$$$$$$$$\n");
        printf("  $$$$$$$$""$$$$   $$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$     $$$$""""""""\n");
        printf(" """"       $$$$    ""$$$$$$$$$$$$$$$$$$$$$$$$$$$$""      o$$$\n");
        printf("            ""$$$o     """"$$$$$$$$$$$$$$$$$$""$$""         $$$\n");
        printf("              $$$o          ""$$""$$$$$$""""           o$$$\n");
        printf("               $$$$o                 oo             o$$$""\n");
        printf("                ""$$$$o      o$$$$$$o""$$$$o        o$$$$\n");
        printf("                  ""$$$$$oo     ""$$$$o$$$$$o   o$$$$""  \n");
        printf("                     ""$$$$$oooo  ""$$$o$$$$$$$$$""""\n");
        printf("                        ""$$$$$$$oo $$$$$$$$$$\n");      
        printf("                                """"$$$$$$$$$$$\n");      
        printf("                                    $$$$$$$$$$$$\n");   
        printf("                                     $$$$$$$$$$""\n"); 
        printf("                                      ""$$$""""\n");

        printf("Você perdeu! Tente de novo.\n");
    }
    // printf("maior %d\n", maior), da erro pelo fato de não estar no escopo da variável.
}
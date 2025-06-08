#include <stdio.h>
#include <math.h>
int resto, maximo;
int indice1 = 0;

int binary(int numero);
int octal(int numero);
int hexadec(int numero);
// adicionar decimal -> hexadecimal

int main() {
    int is_running = 1;
    int numero;
    int opcao;
    
    while (is_running){
        printf("Insira um valor decimal para converter: ");
        scanf("%i", &numero);

        printf("Para qual base numéricas você deseja?:\n");
        printf("1. Binária\n");
        printf("2. Octal\n");
        printf("3. Hexadecimal\n");
        printf("4. Sair\n\n");
        printf("Digite o número da operação:");
        scanf("%i", &opcao);

        switch (opcao){
            case 1:
                binary(numero);
                break;

            case 2:
                octal(numero);
                break;

            case 3:
                hexadec(numero);
                break;

            case 4:
                is_running = 0;
                break;

            default:
                printf("Esse valor não é válido. Tente novamente.\n");
                break;
        }
    }
    // adicionar os if e funções.
}

int binary(int numero){
    char binario[20];
    char binario_invertido[20];
    int chave = 2;

    if (numero == 0){
        binario[0] = 0;
        return printf("O valor em binário: 0\n");
    }

    while (numero != 0){
        resto = numero % chave;
        binario_invertido[indice1] = resto + '0';
        //adiciona o resto (int) em caracrcteres (char) em um array;

        indice1 ++;
        numero /= chave;
    }
    maximo = indice1;

    for (int i = 0; i <= maximo; i++){
        binario[i] = binario_invertido[indice1-1];
        indice1--;
    }

    return printf("O valor em binário: %s\n", binario);
}

int octal(int numero){
    char octal[20];
    char octal_invertido[20];
    int chave = 8;

    if (numero == 0){
        octal[0] = 0;
        return printf("O valor em binário: 0\n");
    }

    while (numero != 0){
        resto = numero % chave;
        octal_invertido[indice1] = resto + '0';
        //adiciona o resto (int) em caracrcteres (char) em um array;

        indice1 ++;
        numero /= chave;
    }
    maximo = indice1;

    for (int i = 0; i <= maximo; i++){
        octal[i] = octal_invertido[indice1-1];
        indice1--;
    }

    return printf("O valor em binário: %s\n", octal);
}

int hexadec(int numero){
    char hexadec[20];
    char hexadec_invertido[20];
    int chave = 16;

    if (numero == 0){
        hexadec[0] = 0;
        return printf("O valor em binário: 0\n");
    }

    while (numero != 0){
        resto = numero % chave;
        hexadec_invertido[indice1] = resto + '0';
        //adiciona o resto (int) em caracrcteres (char) em um array;

        indice1 ++;
        numero /= chave;
    }
    maximo = indice1;

    for (int i = 0; i <= maximo; i++){
        hexadec[i] = hexadec_invertido[indice1-1];
        indice1--;
    }

    return printf("O valor em binário: %s\n", hexadec);
}
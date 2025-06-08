#include <stdio.h>
#include "cidr.h"

int cidr;
int mask;
int is_running = 1;
long hosts = 1;

int main () {
    while (is_running){
        cidr = entrada(); // inclui o valor de cidr para o programa

        if (is_running == 1 && cidr <= 32 && cidr >= 0){
            potencia(cidr); // realiza o calculo de potencia.
            netmask(cidr); // calcula a variável do octal do endereço por meio do resto da divisão do cidr por 8.
    
            resultado();
        }
    }
}

int entrada(){
    int cidr;

    printf("\nDigite o valor do CIDR de 1 a 32 (digite 33 para sair): ");
    scanf("%i", &cidr);

    if (cidr == 33){
        is_running = 0;
    } else if (cidr > 33 || cidr < 0){
        printf("Este valor não é permitido. Digite novamente.");
    }
    
    return cidr;
}

void netmask(int cidr) {
    int resto = cidr % 8;

    switch (resto) {
        case 0: mask = 255; break;
        case 7: mask = 254; break;
        case 6: mask = 252; break;
        case 5: mask = 248; break;
        case 4: mask = 240; break;
        case 3: mask = 224; break;
        case 2: mask = 192; break;
        case 1: mask = 128; break;
    }
}

void potencia(int cidr) {
    int expoente;
    long base = 2;
    hosts = 1;  // Reinicia o valor para evitar multiplicações acumuladas

    if (cidr == 32) { 
        hosts = 1;
    } else if (cidr == 31) {
        hosts = 2;
    } else {
        expoente = 32 - cidr;
        for (int i = 0; i < expoente; i++) {
            hosts *= base;
        }
    }
}

void resultado(){
    if (cidr == 32){
        printf("Mascara da rede: 255.255.255.%i\n", mask);
        printf("Hosts: %i, Hosts disponiveis: %i\n", hosts, hosts);

    } else if (cidr == 31){
        printf("Mascara da rede: 255.255.255.%i\n",mask);
        printf("Hosts: %i, Hosts disponiveis: %i\n", hosts, hosts);

    } else if (cidr > 24){
        printf("Mascara da rede: 255.255.255.%i\n",mask);
        printf("Hosts: %i, Hosts disponiveis: %i\n", hosts, hosts -2);

    } else if (cidr > 16){
        printf("Mascara da rede: 255.255.%i.0\n",mask);
        printf("Hosts: %i, Hosts disponiveis: %i\n", hosts, hosts-2);

    } else if (cidr > 8){
        printf("Mascara da rede: 255.%i.0.0\n",mask);
        printf("Hosts: %i, Hosts disponiveis: %i\n", hosts, hosts-2);

    } else if (cidr > 0) {
        printf("Mascara da rede: %i.0.0.0\n",mask);
        printf("Hosts: %i, Hosts disponiveis: %i\n", hosts, hosts-2);

    } else {
        printf("Mascara da rede: %i.0.0.0\n",mask);
        printf("Hosts: 4294967296, Hosts disponiveis: 4294967294\n");
    }
}
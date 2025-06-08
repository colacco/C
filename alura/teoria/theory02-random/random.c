#include <stdio.h> // importa printf()
#include <stdlib.h> // importa rand() e srand()
#include <time.h> // importa time()

// Nada é aleatório, o que faremos aqui é de certa forma uma gambiarra. 
// A partir do início da Era Unix (01/01/1970), começou a contar, em segundos, quanto tempo se passou.
// Utilizaremos desse conceito para fazer com que nossa máquina crie números 'aleatórios'.

int main()
{
    int segundos = time(0); //mostra os segundos atuais desde 01/01/1970
    srand(segundos); //atualiza o calculo-base do rand()
    int n1 = rand();
    int n2 = rand();

    printf("Aleatório 1: %d, Aleatório 2: %d\n", n1, n2);
    printf("Segundos atuais: %d\n", segundos);
}

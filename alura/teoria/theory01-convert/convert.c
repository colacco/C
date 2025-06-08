//casting variables
// pode converter para qualquer outro tipo, isso pode ocasionar em perda de dados!
#include <stdio.h>

int main(){
    int a = 3;
    int b = 2;
    double pontos = (double)a / (double)b; // seria int / int, com o (double) é realizado a conta como se o valor b fosse double.
    printf("%f\n", pontos);
}

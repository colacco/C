#include <stdio.h>  

int main(){
    char sexo;
    float altura, peso_ideal;

    printf("Informe seu sexo (H/M): ");
    scanf("%c", &sexo);

    printf("Informe sua altura em metros: ");
    scanf("%f", &altura);

    switch(sexo){
        case 'H':
            peso_ideal = (72.7 * altura) - 58.0;
            break;
        case 'M':
            peso_ideal = (62.1 * altura) - 44.7;
            break;
        default:
            printf("\nValor inválido");
            break;
    }

    printf("\nSeu peso ideal é %.2f\n", peso_ideal);
}
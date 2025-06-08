#include <stdio.h>

float salario(int hora, float valorHora, int dias){
    float salario = (hora * valorHora) * dias;
    return salario;
}

int main(){
    int hora, dias;
    float valorHoras;
    float resultado;

    printf("Insira o número de dias trabalhados: ");
    scanf("%d", &dias);
    printf("Insira a quantidade de horas trabalhadas: ");
    scanf("%d", &hora);
    printf("Insira o valor que recebe em uma hora: ");
    scanf("%f", &valorHoras);

    resultado = salario(hora, valorHoras, dias);
    printf("O salário seu é de: %.2f", resultado);

    return 0;
}
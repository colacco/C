#include <stdio.h>

/* 
    Informações: 
    >40hrs : +hora_extra
    acréscimo = hora + (hora * 0,5)

    Requisitos:
    Ler horas trabalhadas em um mês;
    Ler o salário por hora;
    Escreva o salário total = (hora_regular + hora_extra);

    Considere: 
    1 mês = 4 semanas

    Portanto:
    1 semana = 40 horas;
    4 * 40 = 160 horas em um mês;
*/

int main(){
    float salario_total, salario_hora, horas_trabalhadas;
    float jornada_mensal = 4 * 40;
    float hora_extra = 0;

    printf("Total de horas trabalhadas em um mês (h): ");
    scanf("%f", &horas_trabalhadas);
    printf("Salário por hora (R$): ");
    scanf("%f", &salario_hora);

    if (horas_trabalhadas > jornada_mensal){ // Se horas trabalhadas exceder a jornada mensal, atualizar a variável hora_extra. Se for falso, apenas ignora.
        hora_extra = horas_trabalhadas - jornada_mensal;
    }
    salario_total = salario_hora * (jornada_mensal + 1.5 * hora_extra); // Para compreensão da fórmula, confira a resolução matemática no final do código

    printf("O salário total, tendo base as informações fornecidas será de %.2f, já considerando horas extras.\n", salario_total);
}

    //salario_total = (horas_trabalhadas * salario_hora) + acrescimo;
    //acrescimo = (hora_extra * salario_hora) + (hora_extra * salario_hora * 0,5);
/*
    Matemática:
    hora_extra = X
    salario_hora = Y
    acrescimo = Z

    Z = XY + XY0,5
    Z = XY(1 + 0,5)
    Z = 1,5 * XY

    salario_total = A
    horas_trabalhadas = B

    A = (B * Y) + Z
    A = BY + 1,5XY
    A = Y(B + 1,5X)

*/
#include <stdio.h>

/*
    Requisitos:
    Ler ano atual e o ano de nascimento;
    Escrever a idade em: anos, meses, semanas e dias;
*/

int main(){
    int ano, ano_nascimento;
    int idade_ano, idade_mes; 
    float idade_sem, idade_dia;

    printf("Insira o ano em que você está: ");
    scanf("%i", &ano);
    printf("Insira o ano de seu nascimento: ");
    scanf("%i", &ano_nascimento);

    idade_ano = ano - ano_nascimento;
    idade_mes = idade_ano * 12;
    idade_sem = idade_mes * 4.2857; //média de semanas em um mês. Fonte: www.jusbrasil.com.br
    idade_dia = idade_sem * 7;
    
    printf("Considerando o calendário gregoriano, você possui %i anos que equivale a %i meses que é aproximadamente %.0f semanas ou %.0f dias de vida.\n", idade_ano, idade_mes, idade_sem, idade_dia);
}
#include <stdio.h>

int main(){
	int vetor[5];
	int i;
	for(i=0; i<5; i++){
		printf("Entre com um valor: ");
		scanf("%i", &vetor[i]);
	}

	for(i=0; i<5; i++){
		printf("\nValor indice %i: %i", i, vetor[i]);
	}
}

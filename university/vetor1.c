#include <stdio.h>

int main(){
	float notas[5], mediageral=0;
	float menor=10, maior=0;
	int i;

	for(i=0; i<5; i++){
		printf("Entre com uma nota: ");
		scanf("%f", &notas[i]);

		if(notas[i] < menor){
			menor = notas[i];
		}
		if(notas[i] > nmaior){
			maior = notas[i]
		}
 
		mediageral = mediageral + notas[i];
	}
	printf("\nA media geral da sala foi: %f", mediageral/i);
}

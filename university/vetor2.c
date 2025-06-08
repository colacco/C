#include <stdio.h>

int main(){
	float vetora[5] = {2.5, 3.5, 4.5, 5.5, 6.5};
	float vetorb[5] = {10, 20, 30, 40, 50};
	float vetorc[5];

	for(int i=0; i < 5; i++){
		vetorc[i] = vetora[i] + vetorb[i];
		printf("A soma de %.2f + %.2f é igual a %.2f\n", vetora[i], vetorb[i], vetorc[i]);	
	}
}

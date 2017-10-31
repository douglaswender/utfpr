#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){
	int i;
	int tam = 10;
	int vetor[tam];
	int numero;
	int cont = 0;
	int inicio=0;
	int fim = 30;
	srand((unsigned) time(NULL));
	
	for(i=0; i<tam; i++){
		vetor[i] = rand()%(fim + 1 - inicio) + inicio;
	}
	
	scanf("%d", &numero);
		
	for(i=0; i<tam; i++){
		printf("\t Vetor [%d] = %d \n", i, vetor[i]);
	}
	
for(i=0; i<tam; i++){
		if(vetor[i]==numero){
			cont++;
		}
	}
	if(cont!=0){
	printf("Você digitou um número que aparece %d vezes", cont);
	}
}

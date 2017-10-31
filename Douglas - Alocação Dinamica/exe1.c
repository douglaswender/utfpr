#include<stdio.h>
#include<stdlib.h>

int *recebe(int n){
	int *p;
	p=(int*) malloc(n * sizeof(int));
}

void preencher(int *p, int n){
	int i;
	for(i=0;i<n;i++){
		p[i]=i;
	}
}
void imprime(int *p, int n){
	int i;
	for(i=0;i<n;i++){
		printf("\nVALOR NA POSIÇÃO [%d] = %d", i, p[i]);
	}
}
void libera(int *p){
	free(p);
	p=NULL;
}

int main(){
	int *p;
	int n;
	
	printf("INFORME O TAMANHO DO VETOR:\n");
	scanf("%d", &n);
	p=recebe(n);
	preencher(p, n);
	imprime(p, n);
	libera(p);
		
	return 0;
}

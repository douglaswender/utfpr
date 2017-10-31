#include<stdio.h>
#include<stdlib.h>

int** aloca(int n){
	
	int i;
	int **mat;
	mat=(int**) malloc(n * sizeof(int*));
	
	for(i = 0; i < n; i++){
		mat[i] = (int*) malloc(n * sizeof(int));
	}
	return mat;
}

void libera(int** matm int n){
	
	int i;

	for(i = 0; i < n; i++){
		free(mat[i]);
	}
	
	free(mat);
}



int main(){
	
	int **mat;
	int n;
	
	printf("INFORME O TAMANHO DA MATRIZ:\n");
	scanf("%d", &n);
	
	mat = aloca(n);
	
	libera(mat);
	
	return 0;
}

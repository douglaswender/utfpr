#include<stdio.h>
#include<stdlib.h>

int** alocamatriz(int n, int m){
	
	int i;
	int **mat;
	
	mat = (int**) malloc (n * sizeof(int*));
	
	for(i=0; i<m; i++){
		mat[i] = (int*) malloc (m*sizeof(int));
	}
	return mat;
}

int main(){
	
	int** mat;
	
	int n, m;
	
	scanf("%d %d", &n, &m);
	
	mat = alocamatriz(n, m);
	
	printf("%x", mat);
	
	return 0;
}

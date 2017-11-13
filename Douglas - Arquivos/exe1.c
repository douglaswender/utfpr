#include<stdio.h>
#include<stdlib.h>

struct aluno{
	int ra;
	char nome[40];
};

typedef struct aluno Aluno;

int main(){
	int n, op, i;
	Aluno *alunos;
	FILE *arq;
	
	
	
	printf("Informe a quantidade de alunos:\n");
	scanf("%d", &n);
	
	alunos = (Aluno*) malloc(n * sizeof(Aluno));
	
	printf("Deseja informar os alunos agora?(1 - Sim, 2 - Nao)\n");
	scanf("%d", &op);
	
	if(op==1){
		
		for(i = 0; i < n; i++){
		
		printf("Nome aluno [%d]:\n", i+1);
		scanf(" %[^\n]s", &alunos[i].nome);
		
		printf("RA do aluno [%d]\n", i+1);
		scanf("%d", &alunos[i].ra);
		
	}
	}
	printf("Deseja salvar os dados em um arquivo?\n");
	scanf("%d", &op);
	if(op==1){
		arq = fopen("arqTeste.dat", "wb");
		if(arq == NULL){
			printf("Nao foi possivel abri o arquivo!\n");
			return 0;
		}else{
			fwrite(alunos, sizeof(Aluno), n, arq);
		}
		fclose(arq);
	}
	
	
	
	
	
	return 0;
}

#include<stdio.h>
#include<stdlib.h>
#include<string.h>

struct aluno{
	int ra;
	char nome[30];
	float p1, p2, p3;
};

void maiorNotaP1(struct aluno alunos[], int qtd){
	
	struct aluno maior;
	int i;
	maior.p1=0;
	for(i=0;i<qtd;i++){
		//printf(" %s", alunos[i].nome);
		if(alunos[i].p1>maior.p1){
			maior.p1=alunos[i].p1;
			maior.p2=alunos[i].p2;
			maior.p3=alunos[i].p3;
			maior.ra=alunos[i].ra;
			strcpy(maior.nome, alunos[i].nome);
			//maior.nome = alunos[i].nome;
		}
	}
	printf("\n --------- Melhor Aluno ---------\n");
	printf("RA......: %d\n", maior.ra);
	printf("Nome....: %s \n", maior.nome);
	printf("Nota P1.: %.2f\n", maior.p1);
	printf("Nota P2.: %.2f\n", maior.p2);
	printf("Nota P3.: %.2f\n", maior.p3);
	
}
void maiorMedia(struct aluno alunos[], int qtd){
	
	struct aluno melhor;
	int i;
	float media=0, aux=0;
	
	for(i=0; i<qtd; i++){
		
		aux=(alunos[i].p1+alunos[i].p2+alunos[i].p3)/3;
		
		if(aux>media){
			melhor.p1=alunos[i].p1;
			melhor.p2=alunos[i].p2;
			melhor.p3=alunos[i].p3;
			melhor.ra=alunos[i].ra;
			strcpy(melhor.nome, alunos[i].nome);
			media=aux;
		}
	}
	printf("\n --------- Melhor Media ---------\n");
	printf("RA......: %d\n", melhor.ra);
	printf("Nome....: %s \n", melhor.nome);
	printf("Nota P1.: %.2f\n", melhor.p1);
	printf("Nota P2.: %.2f\n", melhor.p2);
	printf("Nota P3.: %.2f\n", melhor.p3);
	
}
void menorMedia(struct aluno alunos[], int qtd){
	
	struct aluno aln;
	int i;
	float media=10, aux=0;
	
	for(i=0; i<qtd; i++){
		
		aux=(alunos[i].p1+alunos[i].p2+alunos[i].p3)/3;
		
		if(aux<media){
			aln.p1=alunos[i].p1;
			aln.p2=alunos[i].p2;
			aln.p3=alunos[i].p3;
			aln.ra=alunos[i].ra;
			strcpy(aln.nome, alunos[i].nome);
			media=aux;
		}
	}
	printf("\n --------- Menor Media ---------\n");
	printf("RA......: %d\n", aln.ra);
	printf("Nome....: %s \n", aln.nome);
	printf("Nota P1.: %.2f\n", aln.p1);
	printf("Nota P2.: %.2f\n", aln.p2);
	printf("Nota P3.: %.2f\n", aln.p3);
}

void exibeLista(struct aluno alunos[], int qtd){
	
	struct aluno aln;
	int i;
	int media=6;
	float aux=0;
	printf("\n --------- Lista dos Alunos ---------\n")
	for(i=0; i<qtd; i++){
		
		aux=(alunos[i].p1+alunos[i].p2+alunos[i].p3)/3;
		
		if(aux>=media){
			printf("| %s - \tAPROVADO |\n", alunos[i].nome);
		}
		else{
			printf("| %s - \tREPROVADO|\n", alunos[i].nome);
		}
	}
}

int main(){
	
	int qtd, i;
	
	struct aluno maior;
	
	printf("Informe a quantidade de alunos:\n");
	scanf("%d", &qtd);
	
	struct aluno alunos[qtd];
	
	for(i=0; i<qtd; i++){
		printf("Informe o RA:");
		scanf("%d", &alunos[i].ra);
		printf("Informe o nome:");
		scanf(" %[^\n]s", &alunos[i].nome);
		printf("Informe a nota da prova 1:");
		scanf("%f", &alunos[i].p1);
		printf("Informe a nota da prova 2:");
		scanf("%f", &alunos[i].p2);
		printf("Informe a nota da prova 3:");
		scanf("%f", &alunos[i].p3);		
	}
	maiorNotaP1(alunos, qtd);
	maiorMedia(alunos, qtd);
	menorMedia(alunos,qtd);
	exibeLista(alunos, qtd);
	return 0;
}

#include<stdio.h>
#include<stdlib.h>
#include<string.h>


struct cad{
	char nome[30];
	char end[40];
	char num[10];
};
int main(){
	int i;
	struct cad aluno[5];
	
	for(i=0;i<5;i++){
		int j = i+1;
		printf("Informe o nome do aluno [%d]", j);
		scanf(" %[^\n]s", &aluno[i].nome);
		printf("Informe o endereco do aluno [%d]", j);
		scanf(" %[^\n]s", &aluno[i].end);
		printf("Informe o numero do aluno [%d]", j);
		scanf(" %[^\n]s", &aluno[i].num);
	}
	printf("\n-------------------- Cadastro de Aluno --------------------\n\n\n");
	for(i=0;i<5;i++){
		printf("Nome.........: %s\n", aluno[i].nome);
		printf("Endereco.....: %s\n", aluno[i].end);
		printf("Numero.......: %s\n", aluno[i].num);
	}
	return 0;
}

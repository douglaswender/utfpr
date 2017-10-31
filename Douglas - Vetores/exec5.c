#include<stdio.h>

int main(){
	
	int qtd, i;
	
	
	printf("Informe a quantidade de alunos da sala:\n");
	scanf("%d", &qtd);
	
	float nota1[qtd], nota2[qtd], nota3[qtd], media[qtd];

	for(i=0; i<qtd; i++){
		
		printf("Informe a primeira nota do aluno [%d]\n", i);
		scanf("%f", &nota1[i]);
		
		printf("Informe a segunda nota do aluno [%d]\n", i);
		scanf("%f", &nota2[i]);
		
		printf("Informe a terceira nota do aluno [%d]\n", i);
		scanf("%f", &nota3[i]);
		
		media[i] = (nota1[i]+nota2[i]+nota3[i])/3;
		
		printf("Nota final do aluno [%d] = %f\n", i, media[i]);
	}
	
}

#include<stdio.h>
#include<stdlib.h>
#include<string.h>

struct Ponto{
	int x,y;
};

void verifica(struct Ponto rie, struct Ponto rsd, struct Ponto p){
	if((p.x<=rsd.x)&&(p.x>=rie.x)){
		if((p.y<=rsd.y)&&(p.y>=rie.y)){
			printf("Este ponto pertence ao retangulo!");
		}
		else{
			printf("Este ponto nao pertence ao retangulo!");
		}
	}
	else{
		printf("Este ponto nao pertence ao retangulo!");
	}
}

int main(){
	
	struct Ponto p;
	struct Ponto rie;
	struct Ponto rsd;

	
	printf("Informe a posição (inferior esquerdo) do retangulo: \n");
	scanf("%d", &rie.x);
	scanf("%d", &rie.y);
	printf("Informe a posição (superior direito) do retangulo: \n");
	scanf("%d", &rsd.x);
	scanf("%d", &rsd.y);
	printf("Informe onde está o seu ponto em x:\n");
	scanf("%d", &p.x);
	printf("Informe onde está o seu ponto em y:\n");
	scanf("%d", &p.y);
	
	verifica(rie, rsd, p);
	
	
	return 0;
}

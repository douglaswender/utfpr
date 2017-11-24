#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main(){
	//definindo variáveis
	//esc = escritórios
	int esc[1000];
	//q, e do exercício URI onde Q é escritorios na
	// ultima semana e E nos ultimos 2 dias
	//i para os laços
	//j para auxiliar no vetor esc
	//[esc-1] pois o número que o usuário digitar
	//é representado uma posição a menos
	int q, e, i, j;
	memset(esc,0,sizeof(esc));
	scanf("%d %d", &q, &e);
	//primeiro laço define os escritórios que foram visitados
	//nos últimos 2 dias
	for(i=0;i<e;i++){
		scanf("%d", &j);
		esc[j-1] = 1;
	}
	//segundo laço, procura onde está as chaves, se visitou 0
	//seta como 1 caso ele não tenha visitado este escritório.
	for(i=0;i<q;i++){
		scanf("%d", &j);
		if(!esc[j-1]){
			printf("1\n");
			esc[j-1] = 1;
		}else
			printf("0\n");
	}
	return 0;
}

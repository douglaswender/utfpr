#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main(){
	//definindo vari�veis
	//esc = escrit�rios
	int esc[1000];
	//q, e do exerc�cio URI onde Q � escritorios na
	// ultima semana e E nos ultimos 2 dias
	//i para os la�os
	//j para auxiliar no vetor esc
	//[esc-1] pois o n�mero que o usu�rio digitar
	//� representado uma posi��o a menos
	int q, e, i, j;
	memset(esc,0,sizeof(esc));
	scanf("%d %d", &q, &e);
	//primeiro la�o define os escrit�rios que foram visitados
	//nos �ltimos 2 dias
	for(i=0;i<e;i++){
		scanf("%d", &j);
		esc[j-1] = 1;
	}
	//segundo la�o, procura onde est� as chaves, se visitou 0
	//seta como 1 caso ele n�o tenha visitado este escrit�rio.
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

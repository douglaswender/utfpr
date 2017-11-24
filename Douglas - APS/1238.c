#include <stdio.h>
#include <string.h>

int main(){
	
	int n, c, ta , tb;
	char a[51], b[51];
	
	scanf("%d", &n);
	
	while(n--){
		//Ler as duas strings
		scanf("%s %s", a, b);
		
		//Define o tamanho da string
		ta = strlen(a);
		tb = strlen(b);
		
		//ta = 2, tb = 2, c = 0
		
		//Percorre o laço enquanto c for menor que o tamanho de qualquer uma das strings
		for(c=0;c<ta||c<tb;c++){
			
			//alterna entre a impressão dos caracteres
			if(c<ta)
				printf("%c",a[c]);
			if(c<tb)
				printf("%c",b[c]);
		}
		printf("\n");
	}	
	return 0;
}

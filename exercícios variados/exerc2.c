#include <stdio.h>

int main (void){
	float prestacao, taxa, r;
	
	printf("Informe o valor da prestacao: \n");
	scanf("%f", &prestacao);
	
	printf("Informe o valor da taxa de juros: \n");
	scanf("%f", &taxa);
	
	r=prestacao+(prestacao*taxa/100);
	
	printf("O novo valor com a taxa de juros e de: %.f", r);
}

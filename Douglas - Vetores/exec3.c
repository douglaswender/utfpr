#include<stdio.h>

int main(){
	
	int tam = 15;
	int vet[tam];
	int i, ip=0, ii=0;
	int contp=0, conti=0;
	
	for(i=0; i<tam; i++){
		
		system("cls");
		printf("Informe o valor para inserir na posição [%d]: \n", i);
		scanf("%d", &vet[i]);
		if(vet[i]%2==0){
			contp++;
		}else{
			conti++;
		}
		
	}
	printf("Existem %d numeros pares\n Existem %d numeros impares\n", contp, conti);
	
	int par[contp];
	int impar[conti];
	
	for(i=0; i<tam; i++){
		
		if(vet[i]%2==0){
			par[ip]=vet[i];
			ip++;
		}
		else{
			impar[ii]=vet[i];
			ii++;
		}
				
	}
	printf("Pares:\n");
	for(i=0; i<contp; i++){
		printf("%d\n", par[i]);
	}
	printf("Impares:\n");
	for(i=0;i<conti;i++){
		printf("%d\n", impar[i]);
	}
}

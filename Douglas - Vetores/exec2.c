#include<stdio.h>
#define tam 10

int main(){
	int vet[tam];
	int i, cont = 0;
	for(i=0;i<tam;i++){
		
		do{
			system("cls");
			printf("Informe um valor da posicao %d :\n", i);
			scanf("%d", &vet[i]);
		}while(vet[i] < 0);
	
	}	
	
	system("cls");
	
	printf("\n \t Numeros pares: \n \n");
	
	for(i=0; i<tam; i++){
		if(vet[i]%2==0){
			printf("\t Vetor [%d] = %d \n ", i, vet[i]);
		}
	}
	
	printf("\n \t Numeros divisiveis por 3 e por 5: \n \n");
	printf("\t ==================\n");
	
	for(i=0; i<tam; i++){
		if((vet[i] % 3 == 0) && (vet[i] % 5 == 0)){
			cont++;
			printf("\t | Vetor [%d] = %d | \n", i, vet[i]);
		}
	}
	
	printf("\t ==================\n");

	
	printf("\n \t A quantidade de valores divisiveis por 3 e por 5 e: %d \n", cont);
		
	printf("\n \t Numeros menores que 10 e maiores que 100: \n \n");
	
	for(i=0; i<tam; i++){
		if((vet[i]<10) || (vet[i]>100)){
			printf("\t Vetor [%d] = %d \n", i, vet[i]);
		}
	}
	
	printf("\n \t Numeros maiores que 10 e menores que 100: \n \n ");
	
	for(i=0; i<tam; i++){
		if((vet[i]>10)&&(vet[i]<100)){
			printf("\t Vetor [%d] = %d \n", i, vet[i]);
		}
	}
	
	printf("\n \t Numeros impares: \n \n ");
	cont=0;
	for(i=0; i<tam; i++){
		if(vet[i]%2!=0){
			cont++;
			printf("\t Vetor [%d] = %d \n", i, vet[i]);
		}
	}
	printf("\n \t A quantidade de valores impares e: %d \n", cont);

	
}

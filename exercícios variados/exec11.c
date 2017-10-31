#include<stdio.h>

int main(void){
	
	char letra;
	int i=0;
	
	do{
		
		scanf(" %c", &letra);
		
		i++;
		
	}while((letra!='a') && (letra!='A'));
	
	printf("%d\n", i);
	
	return 0;
}

#include<stdio.h>
#include<stdlib.h>

int main(void){
	
	int n;
	int *ptr;
	
	n=10;
	
	ptr=&n;
	
	printf("O valor de n: [%d] | Com o endereço: [%x]\n", n, &n);
	printf("O valor de ptr: [%d] | Com o endereco:[%x]\nE o valor apontado e: %x", *ptr, &ptr, ptr);
	
	return 1;

}

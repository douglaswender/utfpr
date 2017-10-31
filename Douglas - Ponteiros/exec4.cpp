#include<stdio.h>
#include<stdlib.h>

int main(void){
	
	int i=99, j;//decaração de duas variáveis do tipo int;
	int *p; //declaração de um ponteiro tipo int;
	p=&i; //p recebe o endereço da variável i;
	j=*p+100;//j recebe o valor de p e soma a ele 100, ou seja 99+100;
	
	return 1;

}

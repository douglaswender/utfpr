#include<stdio.h>
#include<stdlib.h>

int main(void){
	
	int i=99, j;//decara��o de duas vari�veis do tipo int;
	int *p; //declara��o de um ponteiro tipo int;
	p=&i; //p recebe o endere�o da vari�vel i;
	j=*p+100;//j recebe o valor de p e soma a ele 100, ou seja 99+100;
	
	return 1;

}

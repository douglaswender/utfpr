#include <stdio.h>

int main(void){
	
	float aplicacao=1000;
	int count;
	
	while(aplicacao<=1200){
		aplicacao=aplicacao+5*aplicacao/100;
		count++;
	}
	printf("%d", count);
}

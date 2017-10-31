#include<stdio.h>

int main(void){
	
	int x, y, r;
	
	x=10;
	y=20;
	
	//Exercício 4, letra A
	r=(x+y)/y*x*x;
	printf("%d\n", r);
	
	//Letra B
	r=(x+y)/(x-y);
	printf("%d\n", r);
	
	//Letra C
	r=(x*x)+(y*y)/2;
	printf("%d\n", r);
	
	//letra D
	r=(x*x*x)/(x*x);
	printf("%d\n", r);
	
	//letra E
	r=x%y;
	printf("%d\n", r);
	
	//Letra F
	r=x%5;
	printf("%d\n", r);
	
}

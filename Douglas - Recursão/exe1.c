#include<stdio.h>

int func(int n){
	if(n==15){
		return n;
	}else{
		func(n+1);
	}
}

int main(){
	
	int n;
	int r;
	
	printf("informe o valor:\n");
	scanf("%d", &n);	
	r=func(n);
	
	printf("%d", r);
	
	return 0;
}

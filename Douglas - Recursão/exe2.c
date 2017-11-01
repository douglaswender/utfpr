#include<stdio.h>

int inverte(int n){
	if(n==0){
		return n;
	}else{
		printf("%d ", n%10);
		n=n/10;
		return inverte(n);
	}
	return 0;
}

int main(){
	
	int n;
	
	printf("Informe o numero que deseja inverter(?):\n");
	scanf("%d", &n);
	
	inverte(n);
	
	return 0;
}

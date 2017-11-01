#include<stdio.h>

void par(int n){
	if(n>0){
		if(n%2==0){
			printf("%d\n", n);
			par(n-2);
		}else{
			par(n-1);
		}
	}else{
		return;
	}
}

void impar(int n){
	if(n>0){
		if(n%2!=0){
			printf("%d\n", n);
			impar(n-2);
		}else{
			impar(n-1);
		}
	}else{
		return;
	}
	
}

int main(){
	
	par(17);
	impar(16);
	
	return 0;
}

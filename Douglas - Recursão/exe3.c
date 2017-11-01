#include<stdio.h>

void bin(int n){
	int k;
	k=n/2;
	
	if(k==1){
		printf("%d%d", k, n%2);
	}else{
		bin(n/2);
		printf("%d", n%2);
	}

}

int main(){
	//como no exemplo, usando a função para transformar 8 em binário
  	bin(8);
  
  return 0;
}

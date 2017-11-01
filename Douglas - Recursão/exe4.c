#include<stdio.h>

int multiplica(int n1, int n2){
	if(n1>0){
		return n2+multiplica(n1-1, n2);
	}else{
		return 0;
	}
}

int main(){
	
	int num;
	
	num = multiplica(3, 2);
	
	printf("%d", num);
	
	return 0;
}

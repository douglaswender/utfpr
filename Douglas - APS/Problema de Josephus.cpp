//Exercício: A lenda de Josephus
//Nomes: Douglas Wender e Messias Junior

#include <stdio.h>

int josephus(int n, int k){
	if(n==1){
		return 1;
	}else{
		return (josephus(n-1, k)+k-1)%n+1;
		
	}
}

int main(){
	
	int ncase, n, k, i;
	while(scanf("%d", &ncase)==1){
		for(i=1; i<=ncase; i++){
			scanf("%d %d", &n, &k);
			int tmp = josephus(n, k);
			printf("Case %d: %d\n", i, tmp);
		}
	}
	
	return 0;
}

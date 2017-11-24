#include <stdio.h>
#include <string.h>
double embaralha(int n){
	if(n==1){
		return 1;
	}else{
		return n * embaralha(n-1);
	}
}

int main(){
	
	int count=0, i;
	double qtd;
	char s[30];
	
	while(s[0]!='0'){
		
		scanf("%s", &s);
		
		if(s[0]=='0'){
			break;
		}else{
			
			for(i=0; s[i]!='\0'; i++){
				count++;
			}
			
			qtd = embaralha(count);
			count=0;
			printf("%.0lf\n", qtd);
			
		}
			
	}
	
	return 0;
}

#include <stdio.h>

main(){
	
    int m, l, c;
    
    while(scanf("%d" , &m)!=EOF){
   		if(m==0) break;
    	//laço para percorrer as linhas;
          for(l = 0; l < m; l++){
          	//laço para percorrer as colunas;
          	for(c = 0;c < m; c++){
          	    /*lógica do exercício, linha+colunas+1 é 
				igual ao número da matriz e vai printar 2*/           
				if(l + c + 1 == m) printf("2");
				//se linha e conluna forem o mesmo número, printa 1
				//que no caso é a diagonal principal
               	else if(l == c) printf("1");
               	//caso não for nenhum desses casos, printa 3
               	else printf("3");
          	
          	}printf("\n");          }
    }
}

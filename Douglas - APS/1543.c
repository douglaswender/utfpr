#include <stdio.h>

main(){
	
    int m, l, c;
    
    while(scanf("%d" , &m)!=EOF){
   		if(m==0) break;
    	//la�o para percorrer as linhas;
          for(l = 0; l < m; l++){
          	//la�o para percorrer as colunas;
          	for(c = 0;c < m; c++){
          	    /*l�gica do exerc�cio, linha+colunas+1 � 
				igual ao n�mero da matriz e vai printar 2*/           
				if(l + c + 1 == m) printf("2");
				//se linha e conluna forem o mesmo n�mero, printa 1
				//que no caso � a diagonal principal
               	else if(l == c) printf("1");
               	//caso n�o for nenhum desses casos, printa 3
               	else printf("3");
          	
          	}printf("\n");          }
    }
}

#include <stdio.h>

int main(){
	
	//Variáveis:
    int p, q, cnt=0, i, dif;
    
    //Leitura 
    scanf("%d%d", &p, &q);
    
    //Definindo vetor com a quantidade digitada
    int jump[q];
    
    //Laço para digitar os números
    for(i=0; i<q; i++){
    	scanf("%d",  &jump[i]);
	}
    
    //laço para verificação dos saltos
    for(i=1; i<q; i++){
    	
    	//
        if(jump[i]>jump[i-1])
         dif = (jump[i] - jump[i-1]);
        else
         dif = (jump[i-1] - jump[i]);
        if(dif<=p)
            cnt++;
    }
    if(cnt== q-1)
        printf("YOU WIN\n");
    else
        printf("GAME OVER\n");
    return 0;
}

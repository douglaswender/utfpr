#include <stdio.h>

int main(){
	
	//Vari�veis:
    int p, q, cnt=0, i, dif;
    
    //Leitura 
    scanf("%d%d", &p, &q);
    
    //Definindo vetor com a quantidade digitada
    int jump[q];
    
    //La�o para digitar os n�meros
    for(i=0; i<q; i++){
    	scanf("%d",  &jump[i]);
	}
    
    //la�o para verifica��o dos saltos
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

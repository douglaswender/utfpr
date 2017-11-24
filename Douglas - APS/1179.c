#include <stdio.h>
     
int main(){
    int a, p, i, b, j;
    
    int par[5];
    int impar[5];
    
    p = 0;
    i = 0;
    
    for(j = 0; j < 15; j++){
            scanf("%d", &a);
            if(a%2 == 0){
                    par[p] = a;
                    p++;
            }else{
                  impar[i] = a;
                  i++;
            }
            
            if(p == 5){
                 b = 0;
                 while(b != 5){ printf("par[%d] = %d\n", b, par[b]);
                 b++;
				 }
                 p = 0;
            }
            if(i == 5){
                 b = 0;
                 while(b != 5){ 
                 printf("impar[%d] = %d\n", b, impar[b]);
                 b++;
				 }
                 i = 0;
            }
            if(j == 14){
                 b = 0;
                 while(b < i){ 
                 	printf("impar[%d] = %d\n", b, impar[b]);
                 	b++;
				 }
                 b = 0;
                 while(b < p){
                 	printf("par[%d] = %d\n", b, par[b]);
                 	b++;
				  }
            }
                 
    }
    return 0;
}
